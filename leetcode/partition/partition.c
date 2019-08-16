#include <stdio.h>  
#include <malloc.h>

struct ListNode {
    int val;
    struct ListNode *next;
  };

struct ListNode* partition(struct ListNode* head, int x) {
  //空链表
  if(!head){
    return NULL;
  } 

  //创建新链表
  struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode* cur1 = head;
  struct ListNode* cur2 = newhead;

  while(cur1) {
    if(cur1->val < x) {
      struct ListNode* savenext = cur1->next;
      cur2->next = cur1;
      cur1->next = nullptr;
      cur2 = cur1;
      cur1 = savenext;
    }
    else{
      cur1 = cur1->next;
    }
  }
  cur2->next = 
  return newhead;

  
}
