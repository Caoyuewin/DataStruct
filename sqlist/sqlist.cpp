#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
class SeqList{
    public:
        SeqList(size_t size)
            : _size(0), _capacity(size)
        {
            _array = new T[size];
        }
        ~SeqList() {
            delete[] _array;
        }
        //头插
        void HeadInsert(T data) {
            CheckCapacity();
            for(int i = _size; i > 0; --i) {
                _array[i+1] = _array[i];
            } 
            _array[0] = data;
            ++_size;
        }
        //头删
        void HeadErase() {
            for(int i = 0; i < _size; ++i) {
                _array[i] = _array[i+1];
            }
            --_size;
        } 
        //中间插入
        void Insert(T data, int pos) {
            CheckCapacity();
            for(int i = _size; i > pos; --i) {
                _array[i+1] = _array[i];
            }
            _array[pos] = data;
            ++_size;
        }
        //中间删除
        void Erase(int pos) {
            for(int i = pos; i < pos; ++i) {
                _array[i] = _array[i+1];
            }
            --_size;
        }
        //尾插
        void TailInsert(T data) {
            CheckCapacity();
            _array[_size+1] = data;
            ++_size;
        }
        //尾删
        void TailErase() {
            --_size;
        }
        //扩容函数
        void CheckCapacity(){
            if(_capacity == _size) {
                //扩容为两倍
                _capacity *= 2;
                //开辟空间
                T* tmp = new T[_capacity];
                //搬移元素
                for(int i = 0; i < _size; ++i) {
                    tmp[i] = _array[i];
                }
                swap(tmp, _array);
                //释放资源
                delete[] tmp;
            }
        }
        //打印函数
        void Print() {
            for(int i = 0; i < _size; ++i) {
                cout << _array[i] << " ";
            }
            cout << endl;
        }
    private:
        int _size;
        int _capacity;
        T* _array;
};


void TestFunc() {
    SeqList<int> list(3);
    list.HeadInsert(5);
    list.HeadInsert(4);
    //list.HeadInsert(3);
    //list.Insert(10, 2);
    //list.TailInsert(6);
    list.Print();
}


int main() {
    TestFunc();

    return 0;
}

