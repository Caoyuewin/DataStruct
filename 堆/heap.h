#include<stdio.h>
#include<malloc.h>
#include<assert.h>
#include<memory.h>

typedef int Datatype;

typedef struct Heap{
  Datatype* _array;
  int _capacity;
  int _size;

}Heap;

void CreateHeap_Small(Heap* hp, Datatype size, Datatype* _array);
void CreateHeap_Big(Heap* hp, Datatype size, Datatype* _array);
void DestoryHeap(Heap* hp);
void InitHeap(Heap* hp);
Datatype TopHeap(Heap* hp);
void EraseHeap (Heap* hp, int size);
void Insert_Small(Heap* hp, Datatype data);
void Insert_Big(Heap* hp, Datatype data);
