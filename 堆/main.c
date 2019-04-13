#include"heap.h"

void PrintHeap(Heap* hp){
  Datatype i = 0;
  for(; i < hp->_size; i++){
    printf("%d\n", hp->_array[i]);
  }
}

int main (){
  Heap hp;
  Datatype a[] = {15, 24, 45, 34, 67, 56, 23, 11, 8, 65};
  InitHeap(&hp);
  CreateHeap(&hp, sizeof(a) / sizeof(a[0]), a);
  PrintHeap(&hp);
  //printf("\n");
  //printf("%d\n", TopHeap(&hp));
  //printf("\n");
  //EraseHeap(&hp,hp._size);
  //PrintHeap(&hp, hp._size);
  Insert(&hp, 3);
  //printf("\n");
  PrintHeap(&hp);
  DestoryHeap(&hp);

  return 0;
}
