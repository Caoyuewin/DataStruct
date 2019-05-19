#include <iostream>
#include <malloc.h>

using namespace std;

#define MAX 3
typedef int Datatype;

class sqlist{
  public:
//构造函数
sqlist(int size, int *array){
  _capacity = MAX;
  _array = new Datatype[MAX];
  _size = size; 
  int i = 0;
  for(; i < size; i++){
    _array[i] = array[i];
  }
}
//析构函数
~sqlist(){
  _capacity = 0;
  delete[] _array;
  _size = 0;
}
    void HeadInsert(Datatype data);
    void TailInsert(Datatype data);
    void HeadErase();
    void TailErase();
    void Insert(Datatype data);
    void Erase(int pos);
    void IncrtCap();
    void PrintList();
  private:
    int _size;
    Datatype* _array;
    int _capacity;
};

void sqlist::HeadInsert(Datatype data){
  if(_size == _capacity)
    IncrtCap();
  int i = _size;
  for(; i > 0; i--){
    _array[i] = _array[i-1];
    
  }
  _array[0] = data; 
  _size++;
}

void sqlist::TailInsert(Datatype data){
  if(_size == _capacity)
    IncrtCap();
  _array[_size] = data;
  _size++;
}

void sqlist::IncrtCap(){
  _array = new Datatype[2*_capacity];
  _capacity *= 2;
}

void sqlist::HeadErase(){
  int i = 0;
  for(; i < _size -2; i++){
    _array[i] = _array[i+1];
  }
  _size--;
}

void sqlist::TailErase(){
  _size--;
}
    
void sqlist::PrintList(){
  int i = 0;
  for(; i < _size; i++){
    cout<<_array[i]<<" ";
  }
  cout<<endl;
}
    
int main() {
  int a[2] = {1,2};
  sqlist list(sizeof(a) / sizeof(a[0]), a);
  list.HeadInsert(0);
  list.TailInsert(3);
  list.PrintList();
  return 0;
}
