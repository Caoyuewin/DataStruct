#include"heap.h"

static void Swap(Datatype* a, Datatype x, Datatype y){
  Datatype tmp = a[x];
  a[x] =a[y];
  a[y] = tmp;
}

void InitHeap(Heap* hp){
  hp->_array = NULL;
  hp->_size = 0;
  hp->_capacity = 0;
}

void AdjustDown(Datatype* a, Datatype parent, Datatype child){
  while(a[parent] > a[child]){
    Swap(a, parent, child);
    parent = child;
    child = 2* child + 1;
        
  }  

}

void CreateHeap(Heap* hp, Datatype size, Datatype* a){
  //空树
  if(size == 0){
    hp = NULL;
    return;
  }
  //开辟堆的空间
  Datatype* p = (Datatype*)malloc(sizeof(a));
      if(p != NULL){
        hp->_array = p;  
      }
  //将需要构建的堆元素依次搬入开辟的堆空间
Datatype i = 0;
  for (; i < size; i++){
    hp->_array[i] = a[i];

  }
  //定义孩子，双亲
  Datatype parent = (size - 2) / 2;
  Datatype child = 2*parent + 1;
  while(child < size && hp->_array[parent] < hp->_array[child]){
  //找到左右孩子中较小的孩子
  if(child < 9){
    if(hp->_array[child] > hp->_array[child + 1]){
  
      child += 1;
    }
  }
    //如果双亲比还节点还大（小堆），交换双亲与孩子的位置
    if(hp->_array[parent] > hp->_array[child]){
      Swap(hp->_array, parent, child);
    }
      parent -= 1;
      child = 2*parent + 1;
    

    
  
  }
}


void DestoryHeap(Heap* hp){
  free(hp->_array);
  hp->_size = 0;
  hp->_capacity = 0;
}



