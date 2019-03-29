#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>

typedef struct Node{
	int val;
	Node* left;
	Node* right;
}Node;

//前序遍历
void PreorderTraversal(Node* root) {
	if (root == NULL)
		return;
	printf("%d\n", root->val);
	PreorderTraversal(root->left);
	PreorderTraversal(root->right);
}

//中序遍历
void MidorderTraversal(Node* root) {
	if (root == NULL)
		return;
	MidorderTraversal(root->left);
	printf("%d\n", root->val);
	MidorderTraversal(root->right);-
}

//节点个数
int Size(Node* root) {

}

//叶子节点个数
int LeafSize(Node* root) {
	if (root == NULL) {
		return 0;
	}
	if (root->left == NULL && root->right == NULL) {
		return 1;
	}
	int left = LeafSize(root->left);
	int right = LeafSize(root->right);
	return left + right;
}

//二叉树高度
int GetHigh(Node* root) {
	if (root == NULL) {
		return 0;
	}
	if ((root->left == NULL) && (root->right == NULL))
		return 1;
	int left = GetHigh(root->left);
	int right = GetHigh(root->right);

}

//第k层的节点个数
int GetKlevelnum(Node* root, int k) {
	if (root == NULL) {
		return 0;
	}
	if (k == 1) {
		return 1;
	}
	return GetKlevelnum(root->left, k - 1) + GetKlevelnum(root->right, k - 1);
}

//二叉树查值
Node* Find(Node* root, int v) {
	if (root == NULL) {
		return NULL;
	}
	if (root->val == v) {
		return root;
	}
	Node* result = Find(root->left,v);
	if (result != NULL) {
		return result;
	}
	result = Find(root->right);
	if (result != NULL) {
		return result;
	}
	else return NULL;
}
