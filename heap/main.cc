#include<iostream>
#include<vector>
#include<ctime>
#include<memory>
#include "randperm.h"
#include "Heap.h"
using namespace std;

int main(){
    auto ini = clock();
    unique_ptr<vector<int>> pa = randperm(1'000'000);
    Heap a(std::move(*pa));
    auto beg = clock();
    
    a.sort();
    
    auto ed = clock();
    
    cout << double((beg - ini)) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
    cout << double((ed - beg)) / CLOCKS_PER_SEC * 1000 << "ms" << endl;

    
    
    return 0;
}
