//
//  mergesort.cpp
//  SortingAlgorithms
//
//  Created by RogerChen on 14/11/25.
//  Copyright (c) 2014年 RogerChen. All rights reserved.
//

#include "mergesort.h"
#include <climits>

void merge(vector<int> &a, int low, int middle, int high) {
    int p = middle - low + 1;
    int q = high - middle;
    int *left = new int[p + 1];
    int *right = new int[q + 1];
    
    //copy two subarrays into temp arrays
    for (int i = 0; i < p; ++i) {
        left[i] = a[low + i];
    }
    left[p] = INT_MAX;
    for (int i = 0; i < q; ++i) {
        right[i] = a[middle + 1 + i];
    }
    right[q] = INT_MAX;
    
    //merge
    int j = 0;
    int k = 0;
    for (int i = low; i < high + 1; ++i) {
        a[i] = (left[j] < right [k]) ? left[j++] : right[k++];
    }
    
    delete [] left;
    delete [] right;
}

void mergesort(vector<int> &a, int low, int high) {
    if (low < high) {
        int middle = (high + low) / 2;
        mergesort(a, low, middle);
        mergesort(a, middle + 1, high);
        merge(a, low, middle, high);
    }
}

void mergesort(vector<int> &a) {
    mergesort(a, 0, a.size() - 1);
}