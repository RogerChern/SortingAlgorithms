#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
#include<memory>
#include<stdio.h>
#include"randperm.h"
#include"quicksort.h"

using namespace std;

int main(){
    auto ini = clock();
    unique_ptr<vector<int>> pa = randperm(1'000'000);
    auto beg = clock();
    
    quicksort(*pa, 0, pa -> size() - 1);
    
    auto ed = clock();
    
    cout << double((beg - ini)) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
    cout << double((ed - beg)) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
    
    return 0;
}

