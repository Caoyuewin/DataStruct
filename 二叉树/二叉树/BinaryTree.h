#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>

typedef struct Node{
	int val;
	Node* left;
	Node* right;
}Node;

//ǰ�����
void PreorderTraversal(Node* root) {
	if (root == NULL)
		return;
	printf("%d\n", root->val);
	PreorderTraversal(root->left);
	PreorderTraversal(root->right);
}

//�������
void MidorderTraversal(Node* root) {
	if (root == NULL)
		return;
	MidorderTraversal(root->left);
	printf("%d\n", root->val);
	MidorderTraversal(root->right);-
}

//�ڵ����
int Size(Node* root) {

}

//Ҷ�ӽڵ����
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

//�������߶�
int GetHigh(Node* root) {
	if (root == NULL) {
		return 0;
	}
	if ((root->left == NULL) && (root->right == NULL))
		return 1;
	int left = GetHigh(root->left);
	int right = GetHigh(root->right);

}

//��k��Ľڵ����
int GetKlevelnum(Node* root, int k) {
	if (root == NULL) {
		return 0;
	}
	if (k == 1) {
		return 1;
	}
	return GetKlevelnum(root->left, k - 1) + GetKlevelnum(root->right, k - 1);
}

//��������ֵ
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
