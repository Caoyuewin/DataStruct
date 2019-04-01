#include<stdio.h>

//已知一棵二叉树的前序遍历，创建这个二叉树
//

typedef struct {
  Node* root;
  int used;

}Result;

typedef struct Node {
  int value;
  Node* left;
  Node* right;
}Node;

Result CreateTree(char preorder[], int size){
  if(size == 0){
    Result Node = {NULL, 0};
    return Result;
  }
 Result back; 

  if(preorder[0] = '#'){
    return (Result){NULL, 1};
    
  }

  Node* root = (Node*)malloc(sizeof(Node));
  root->value = preorder[0];
  //左子树
   Result L = CreateTree(preorder + 1 ,size - 1);
  //右子树
   Result R = CreateTree(preorder + 1 + L.used , size - 1 - L.used );


}
