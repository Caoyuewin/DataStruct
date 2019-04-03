#include<stdio.h>
#include"Linklist.h"

Node* NewList(){
 Node* A =  CreateNode(1);
 Node* B =  CreateNode(2);
 Node* C =  CreateNode(3);
 Node* D =  CreateNode(4);
 Node* E =  CreateNode(5);
 A->next = B;
 B->next = C;
 C->next = D;
 D->next = E;
 return A;
}

int main(){
 Node* node =  NewList();
 printf();
  return 0;
}
