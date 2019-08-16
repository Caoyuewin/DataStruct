#include<stdio.h>
#include"Linklist.h"

//示例 1：
//输入：[1,2,3,4,5]
//输出：此列表中的结点 3 (序列化形式：[3,4,5])
//返回的结点值为 3 。 (测评系统对该结点序列化表述是 [3,4,5])。
//注意，我们返回了一个 ListNode 类型的对象 ans，这样：
//ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, 以及 ans.next.next.next = NULL.
//示例 2：
//输入：[1,2,3,4,5,6]
//输出：此列表中的结点 4 (序列化形式：[4,5,6])
//由于该列表有两个中间结点，值分别为 3 和 4，我们返回第二个结点。
// 
// 提示：
// 给定链表的结点数介于 1 和 100 之间。
//
/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     struct ListNode *next;
 *      * };
 *       */
struct ListNode* middleNode(struct ListNode* head) {
  if(head == NULL){
    return NULL;
  }
  if(head->next == NULL){
    return head;
  }
  struct ListNode *fast = head;
  struct ListNode *slow = head;
  while(fast != NULL){
    if(fast->next == NULL){
      return slow;
    }
    if(fast->next->next == NULL){
      return slow->next;
    }
    slow = slow->next;
    fast = fast->next->next;
  

  }

}





