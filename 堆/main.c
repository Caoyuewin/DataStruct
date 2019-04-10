#include"heap.h"

void PrintHeap(Heap* hp, Datatype size){
  Datatype i = 0;
  for(; i < size; i++){
    printf("%d\n", hp->_array[i]);
  }
}

int main (){
  Heap hp;
  Datatype a[] = {15, 24, 45, 34, 67, 56, 23, 11, 8, 65};
  InitHeap(&hp);
  CreateHeap(&hp, sizeof(a) / sizeof(a[0]), a);
  PrintHeap(&hp, sizeof(a) / sizeof(a[0]));

  return 0;
}
