#include"heap.h"

static void Swap(Datatype* x, Datatype* y){
  Datatype tmp = *x;
  *x = *y;
  *y = tmp;
}

void InitHeap(Heap* hp){
  hp->_array = NULL;
  hp->_size = 0;
  hp->_capacity = 0;
}

//向下调整
static void AdjustDown(Datatype* a, Datatype size, Datatype parent){
  Datatype child = parent * 2 + 1;
  // 把左右孩子中较小的与根比较，根大则交换
  while(child < size){
    if(child + 1 < size && a[child] > a[child + 1]){
      child += 1;
    }
    if(a[parent] > a[child]){
      Swap(&a[parent], &a[child]);
    parent = child;
    child = parent * 2 + 1;

  }
    else return;
}
}

//创建堆
void CreateHeap(Heap* hp, Datatype size, Datatype* a){
  //空树
  if(hp == NULL){
    assert(0);
    return;
  }
  //开辟堆的空间
  Datatype* p = (Datatype*)malloc(size * sizeof(Datatype));
      if(p != NULL){
        hp->_array = p;  
      }

  hp->_capacity = size;
  //将需要构建的堆元素依次搬入开辟的堆空间
  Datatype i = 0;
  for (; i < size; i++){
    hp->_array[i] = a[i];

  }
  hp->_size = size;
  //定义孩子，双亲
  Datatype parent = (size - 2) / 2;
  while(parent >= 0){
    //向下调整
    AdjustDown(hp->_array, hp->_size, parent);
    parent -= 1;
  }
  return;
}


//销毁堆
void DestoryHeap(Heap* hp){
  assert(hp);
  free(hp->_array);
  hp->_size = 0;
  hp->_capacity = 0;
}

//获取堆顶元素
Datatype TopHeap(Heap* hp){
  return hp->_array[0];
}

//Is the heap empty?
Datatype EmptyHeap(Heap* hp){
  assert(hp);
  return hp->_size == 0;
}

//Delete the top element of Heap 
void EraseHeap(Heap* hp, int size){
  if(EmptyHeap(hp)){
    return;
  }
  Swap(&hp->_array[0], &hp->_array[size - 1]);
  hp->_size--;
  AdjustDown(hp->_array, hp->_size, 0);

}

//check capacity
void CheckCapacity(Heap* hp){
  if(hp->_capacity == hp->_size){
    Datatype* p = (Datatype*)malloc(2 * hp->_size * sizeof(Datatype));
    if(p != NULL){
      memcpy(p, hp->_array, hp->_size * sizeof(Datatype));
      free(hp->_array);
      hp->_array = p;
      hp->_capacity *= 2;
    }
  }
      return;
}

//AdjustUp
void AdjustUp(Heap* hp, Datatype child){
  Datatype parent = (child - 1)/2;
  while(parent >= 0){
    if(hp->_array[parent] >hp->_array[child]){
      Swap(&hp->_array[parent], &hp->_array[child]);
      child = parent;
      parent = (child - 1)/2;

    }
    else return;
  }  
}

//Insert an element
void Insert(Heap* hp, Datatype data){
  CheckCapacity(hp);
  hp->_array[hp->_size] = data;
  hp->_size++;
  AdjustUp(hp, hp->_size - 1);
}


