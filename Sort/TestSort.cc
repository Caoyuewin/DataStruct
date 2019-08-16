#include "Sort.hpp"

using namespace std;

int main() {
    vector<int> num{9,43,457,567,3,45,2,34,5,2,56,24,35,2,43,236,324,5,2,43};
    Sort sort(num);
    sort.StraightInsert();
    sort.Print();
    return 0;
}
