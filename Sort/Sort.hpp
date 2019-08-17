#include <iostream>
#include <vector>


class Sort{
    public:
        Sort(std::vector<int>& num) : _num(num) {}
        //直接插入排序
        void StraightInsert() {
            if(_num.size() <= 1) 
                return;
            for(size_t i = 1; i < _num.size(); ++i) {
                for(size_t j = 0; j < i; ++j) {
                    if(_num[i] < _num[j]) {
                        int tmp = _num[i];
                        _num.erase(_num.begin() + i);
                        _num.insert(_num.begin() + j, tmp);
                        break;
                    }
                }
            } 
        }
        //希尔排序
        void ShellSort() {
            if(_num.size())
                return;
            int gap = _num.size();
            while(gap > 1) {
                gap = gap / 3 + 1;
                for(size_t i = gap; i < _num.size(); i += gap) {
                    for(int j = i - gap; j >= 0; j -= gap) {
                        if(_num[i] < _num[j]) {
                            Swap(_num[i], _num[j]);
                        }
                    }
                }
                //gap = 1, 进行直接插入排序
                StraightInsert();
            }
        }
        //选择排序
        void SelectSort() {
            //int Minimal = 0;
            for(size_t i = 0; i < _num.size(); ++i) {
                for(size_t j = i + 1; j < _num.size(); ++j) {
                    if(_num[j] < _num[i])  {
                        Swap(_num[i], _num[j]);
                    }
                } 
            }
        }
        //交换排序
        //冒泡排序
        void BubbleSort() {
            for(size_t i = _num.size(); i > 0; --i) {
                for(size_t j = 0; j < i; ++j) {
                    if(_num[j] < _num[j-1]) {
                        Swap(_num[j], _num[j-1]);
                    }
                }
            }
        }
        //打印函数
        void Print() {
            for(size_t i = 0; i < _num.size(); ++i) {
                std::cout << _num[i] << std::endl;
            }
        }
    private:
        void Swap(int& ra, int& rb) {
            int tmp = ra;
            ra = rb;
            rb = tmp;
        }
    private:
        std::vector<int> _num;
};
