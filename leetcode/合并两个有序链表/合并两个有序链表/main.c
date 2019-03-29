#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
示例：
输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4*/

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