#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ� 
ʾ����
���룺1->2->4, 1->3->4
�����1->1->2->3->4->4*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if (l1 == NULL && l2 == NULL) {
		return NULL;
	}
	if (l1 == NULL || l2 == NULL) {
		return l1 == NULL ? l1 : l2;
	}


}