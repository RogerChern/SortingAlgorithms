#include<vector>
#include<utility>
#include<memory>
#include<cstdlib>
#include"quicksort.h"
using namespace std;

int partition(vector<int> &a, int l, int  h) {
    int m = (l + h) / 2;
    if (a[m] > a[l])
        swap(a[l], a[m]);
    if (a[h] > a[l])
        swap(a[l], a[h]);
    if (a[m] < a[h])
        swap(a[m], a[h]);
    
    int pivot = a[h];
    int lastlow = l - 1;
    for (int cursor = l; cursor < h; ++cursor){
        if (pivot >= a[cursor]){
            ++lastlow;
            swap(a[lastlow], a[cursor]);
        }
    }
    swap(a[h], a[lastlow + 1]);
    return lastlow + 1;
}

void quicksort(vector<int> &a, int low, int high) {
	if (high > low){
		int middle = partition(a, low, high);
		quicksort(a, low, middle - 1);
		quicksort(a, middle + 1, high);
	}
}

void quicksort(vector<int> &a) {
    quicksort(a, 0, a.size() - 1);
}

int quickselect(vector<int> &a, int low, int high, int statistic) {
    int middle = partition(a, low, high);
    if (middle == statistic) {
        return a[middle];
    }
    else if (middle < statistic) {
        return quickselect(a, middle + 1, high, statistic);
    }
    else {
        return quickselect(a, low, middle - 1, statistic);
    }
}

int quickselect(vector<int> &a, int statistic) {
    return quickselect(a, 0, a.size() - 1, statistic);
}
