#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

//ͷ��
void SListPushhead(SL* s, SLDatatype v) {
	assert(s);
	Node* node = malloc(sizeof(Node));
	node->value = v;
	node->next = s->first;
	s->first = node;
}

//β��
void SListPushBack(SL* s, SLDatatype v) {
	assert(s);
	assert(s->first);
	Node* node = malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;
	if (s->first = NULL)
	{
		s->first = node;
		return;
	}
	Node* current = s->first;
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = node;

}

//ͷɾ
void SListPophead(SL* s) {
	assert(s);
	assert(s->first);
	Node* next = s->first->next;
	free(s->first);
	s->first = next;
}

//βɾ
void SListPopBack(SL* s) {
	assert(s);
	//assert(s->first);

}

void SListRemove(SL* s, SLDatatype v) {
	assert(s);
	if (s->first == NULL)
		return;
	if (s->value == v) {
		Node* next = s->first->next;
		free(s->first);
		s->first == next;
		return;
	}
	Node* current = s->first;

	while (current != NULL) {
		if (current->next->value == v) {
			Node* node = ;
		}
	}
}

void SListRemove(SL* s, SLDatatype v) {
	Node* current = s->first;
	while (current->next != NULL) {
		if (current->next->value == v) {
			Node* next = current->next->next;
			
		}
	}
}