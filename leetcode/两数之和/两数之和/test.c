#define _CRT_SECURE_NO_WARNINGS 1
/*�������� �ǿ� ������������ʾ�����Ǹ������������У����Ǹ��Ե�λ���ǰ��� ���� �ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�
**��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�
**�����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��
**ʾ����
**���룺(2 -> 4 -> 3) + (5 -> 6 -> 4)
**�����7 -> 0 -> 8
**ԭ��342 + 465 = 807*/
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
  //p1����p2��Ϊ��
  while(p1 || p2){
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->next = nullptr;
    //p1��p2����Ϊ��
    if(p1 && p2){
      cur->val = p1->val + p2->val;
      if(cur->val >= 10){
        cur->val %= 10;
      }
      cur->next = node; 
      cur = node;
    }
    //p1Ϊ��
    else if(!p1){
      cur->val = p2->val;
      if(cur->val >= 10){
        cur->val %= 10;
      }
      cur->next = node;
      cur = node;
    }
    //p2Ϊ��
    else{
      cur->val = p1->val;
      if(cur->val >= 10){
        cur->val %= 10;
      }
      cur->next = node;
      cur = node;
    }
    p1 = p1->next;
    p2 = p2->next;
  }
  return sum;
}

