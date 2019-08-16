#include "Sort.hpp"

using namespace std;

int main() {
    vector<int> num{9,5,6,4,6,3,2,1};
    Sort sort(num);
    sort.StraightInsert();
    sort.Print();
    return 0;
}
