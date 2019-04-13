#include"heap.h"

void (*CrateHeap[])(Heap* hp, Datatype size, Datatype* a) = { 0, CreateHeap_Small, CreateHeap_Big};

void(*Insert[])(Heap* hp, Datatype data) = { 0, Insert_Small, Insert_Big };


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
  (*CrateHeap[2])(&hp, sizeof(a) / sizeof(a[0]), a);
  PrintHeap(&hp);
  printf("\n");
  (*Insert[2])(&hp, 99);
  PrintHeap(&hp);
  printf("\n");
  DestoryHeap(&hp);

  return 0;
}
