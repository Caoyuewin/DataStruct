typedef struct Node{
  
  char val;
  Node* right;
  Node* left;
}
typedef struct {
  Node * node;
  int used;
}Result;

Result CreateTree(char preorder[], int size){
  
  
  
  Result result;
  Node* root = (Node*) malloc(sizeof(Node));
  root->val = preorder[0];
  Result leftR = CreateTree(preorder + 1, size - 1);
  Result rightR = CreateTree(preorder + leftR.used, size - leftR.used - 1);
  root->left = leftR.node;
  root->right = rightR.node;

}


#include<queue>
void Levelorder(Node* root){
  using std:queue
  quene<Node*> q;
  q.push(root);
}
