#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


/*ɾ�������е��ڸ���ֵ val �����нڵ㡣
ʾ��:
����: 1->2->6->3->4->5->6, val = 6
���: 1->2->3->4->5*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 struct ListNode {
	int val;
	struct ListNode *next;
};


	

struct ListNode* removeElements(struct ListNode* head, int val) {
	struct ListNode* save = NULL;
	while (head->val  == val) {
		save = head->next;
		free(head);
		head = save;
	}

	struct ListNode* cur = head;
	while (cur) {
		if (cur->next->val == val) {
			//save = cur->next->next;
			save = cur->next->next;
			free(cur->next);
			cur->next = save;
		}
		cur = cur->next;
	}
}
