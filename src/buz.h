/******************************************************************************
* Copyright (c) 2026 lin
* SPDX-License-Identifier: MIT
******************************************************************************/
 
#ifndef _BUZ_H_
#define _BUZ_H_

/*************************************************
宏定义
*************************************************/
#define def_BuzPin			 				P00
 
typedef struct {
	u8  g_u8Duty;
	u8  g_u8Period;
	u8  g_u8Num;
}BUZSET_TypeDef;

typedef struct {
	u8  g_u8Add;
	BUZSET_TypeDef *g_psBuzSet;
	u8  g_u8Out;
}BUZ_TypeDef;

#define def_BuzNone							0
#define def_BuzPower						1
#define def_BuzNormal						2
#define def_BuzErr							3

#define def_BuzSet(x)						F_BuzSet(&g_sBuz,&t_u8BuzSet[x])

/*************************************************
外部声明
*************************************************/
extern BUZ_TypeDef g_sBuz;
extern BUZSET_TypeDef const t_u8BuzSet[];

extern void F_BuzInit(void);
extern void F_BuzSet(BUZ_TypeDef *l_sBuz,BUZSET_TypeDef const *l_sBuzSet);
extern void F_BuzCnt(BUZ_TypeDef *l_sBuz);
extern void F_BuzOut(BUZ_TypeDef *l_sBuz);

#endif