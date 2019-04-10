#include<stdio.h>
#include<malloc.h>
typedef int Datatype;

typedef struct Heap{
  Datatype* _array;
  Datatype _capacity;
  Datatype _size;

}Heap;

void CreateHeap(Heap* hp, Datatype size, Datatype* _array);
void DestoryHeap(Heap* hp);
void InitHeap(Heap* hp);
