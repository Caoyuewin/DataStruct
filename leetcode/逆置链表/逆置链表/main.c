#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


typedef struct ListNode {
	int val;
	struct ListNode* next;
}Node;

Node* Reverse(Node* head) {
	Node* newhead = NULL;
	Node* cur = head;
	Node* save = NULL;

	while (cur) {
		save = cur->next;
		cur->next = newhead;
		newhead = cur;
		cur = save;
	}
	return newhead;
}