#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDatatype;
typedef struct ListNode {
	SLDatatype value;
	struct ListNode* next;
}Node;

typedef struct SList {
	
	SLDatatype value;
	Node* first;
}SL;



//ͷ��
void SListPushhead(SL* s, SLDatatype v);


//β��
void SListPushBack(SL* s, SLDatatype v);