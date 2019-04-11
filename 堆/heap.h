#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int Datatype;

typedef struct Heap{
  Datatype* _array;
  int _capacity;
  int _size;

}Heap;

void CreateHeap(Heap* hp, Datatype size, Datatype* _array);
void DestoryHeap(Heap* hp);
void InitHeap(Heap* hp);
Datatype TopHeap(Heap* hp);
void EraseHeap (Heap* hp, int size);
Datatype EmptyHeap(Heap* hp);
