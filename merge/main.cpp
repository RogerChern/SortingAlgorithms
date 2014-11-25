//
//  main.cpp
//  SortingAlgorithms
//
//  Created by RogerChen on 14/11/25.
//  Copyright (c) 2014年 RogerChen. All rights reserved.
//
#include<iostream>
#include<vector>
#include<ctime>
#include<memory>
#include "randperm.h"
#include "mergesort.h"
using namespace std;

int main(){
    auto ini = clock();
    unique_ptr<vector<int>> pa = randperm(1'000'000);
    auto beg = clock();
    
    mergesort(*pa);
    
    auto ed = clock();
    
    cout << double((beg - ini)) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
    cout << double((ed - beg)) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
    
    
    
    return 0;
}
