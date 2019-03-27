#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>


typedef int ElemType;

typedef struct {
	ElemType* base;
	ElemType* top;
	int stacksize;
}Stack;

void Init(Stack* s) {
	s->stacksize = 10;
	s->base = malloc(sizeof(ElemType)*s->stacksize);
	s->top = s->base;

}

void Push(Stack* s, ElemType val) {
	if ((s->top - s->base) == s->stacksize)
		return;
	*s->top++ = val;
}

void Pop(Stack* s,ElemType val) {
	if (s->base == s->top)
	{
		return;
	}
	val = *--s->top;
}