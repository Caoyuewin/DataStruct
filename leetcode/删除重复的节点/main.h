#include"Linklist.h"


struct ListNode {
  int val;

  struct ListNode *next;
  ListNode(int x) :
    val(x), next(NULL) {
    }
};


class Solution {
  public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
      if(pHead = NULL){
        return NULL;
      }
      if(pHead->next == NULL){
        return pHead;
      }
      ListNode* newHead = (ListNode*)malloc(sizeof(ListNode));
      ListNode* c1 = pHead;
      ListNode* c2 = pHead->next;
      while(c2->next){
        if(c1->val = c2->val){
          c2 = c2->next;
          continue;


        }
        else{
            ListNode* save = c1->next;
            c2->next = NUll;
            newHead->next = c2;



        }
      }
      return newHead;
        


     /* ListNode* head =malloc(sizeof(ListNode)) ;         
       ListNode* mid = pHead;
      ListNode* tail = pHead->next;
      head->next = mid;
      while(tail->next){
        while(mid->val == tail->val && tail->next != NULL){
            mid = mid->next;
            tail = tail->next;
           }
        if(tail->next){
          tail = tail->next->next;
          mid = mid->next->next;

        }
        else{
          mid = mid->next;
          tail = tail->next;
          head = head->next;
        }
         }*/

              
        }

};
 *                     }
 * }
