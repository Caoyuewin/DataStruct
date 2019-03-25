#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>


typedef int ElemType;
typedef struct {
	ElemType* base;
	ElemType* top;
	int stacksize;
};