#define _CRT_SECURE_NO_WARNINGS 1
/*给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
**如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
**您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
**示例：
**输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
**输出：7 -> 0 -> 8
**原因：342 + 465 = 807*/
#include<stdio.h>
#include<stdlib.h>


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

struct ListNode* addTwoNumbers(struct ListNode*p1, struct ListNode* p2) {
  struct ListNode* sum = (struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode* cur = sum;
  while(p1 || p2){
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->next = nullptr;
    if(p1 && p2){
      cur->val = p1->val + p2->val;
      cur->next = node; 
      cur = node;
    }
    else if(!p1){
      cur->val = p2->val;
      cur->next = node;
      cur = node;
    }
    else{
      cur->val = p1->val;
      cur->next = node;
      cur = node;
    }
    p1 = p1->next;
    p2 = p2->next;
  }
  return sum;
}

