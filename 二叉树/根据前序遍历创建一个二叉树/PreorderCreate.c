#include<stdio.h>
#include<malloc.h>

//已知一棵二叉树的前序遍历，创建这个二叉树
//
typedef struct Node {                                                                                                                                                                    
  int value;
  Node* left;
#include<stdio.h>
#include<malloc.h>

  //已知一棵二叉树的前序遍历，创建这个二叉树
  //
  typedef struct Node {                                                                                                                                                                    
    int value;
    Nodef left;
    Node* right;
  }Node;

  typedef struct {
    Node* root;
    int used;
  }Result;

  Result CreateTree(char preorder[], int size){
    if(size == 0){
      Result empty = {NULL, 0};
      return empty;
    }

    Result back; 

    if(preorder[0] = '#'){


    }
    Node* root = (Node*)malloc(sizeof(Node));
    root->value = preorder[0];
    //左子树
    Result L = CreateTree(preorder + 1 ,size - 1);
    //右子树
    Result R = CreateTree(preorder + 1 + L.used , size - 1 - L.used );


  }
  Node* right;
}Node;

typedef struct {
  Node* root;
  int used;
}Result;

Result CreateTree(char preorder[], int size){
  if(size == 0){
    Result empty = {NULL, 0};
    return empty;
  }

  Result back; 

  if(preorder[0] = '#'){


  }
  Node* root = (Node*)malloc(sizeof(Node));
  root->value = preorder[0];
  //左子树
  Result L = CreateTree(preorder + 1 ,size - 1);
  //右子树
  Result R = CreateTree(preorder + 1 + L.used , size - 1 - L.used );


}
