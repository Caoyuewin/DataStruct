#include "Sort.hpp"

using namespace std;

int main() {
    vector<int> num{9,1,2,5,7,4,8,6,3,5};
    Sort sort(num);
    //sort.StraightInsert();
    //sort.ShellSort();
    //sort.SelectSort();
    sort.BubbleSort();
    sort.Print();
    return 0;
}
