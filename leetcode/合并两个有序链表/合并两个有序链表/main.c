#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ� 
ʾ����
���룺1->2->4
	  1->3->4
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
	struct ListNode* current1 = l1;
	struct ListNode* current2 = l2;
	while (current1->next != NULL && current2->next != NULL) {
		if (current2->val >= current1->val) {
			//l2ͷɾ�����l1
			/*struct ListNode* next1 = current1->next;
			struct ListNode* next2 = current2->next;
			current1->next = current2;
			current2->next = next1;
			current2 = next2;*/
			current1 = current1->next;

		}
		else {
			//current1 = current1->next;
		}
	}
	if (current2->next == NULL) {
		return l1;
	}
	if (current1->next == NULL) {
		current1->next = current2;
		return l1;
	}


}