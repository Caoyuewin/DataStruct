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
                    _num.erase(_num.begin() + i - 1);
                    _num.insert(_num.begin() + j - 1, tmp);
                    break;
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
    std::vector<int> _num;
};
