#include<vector>
#include<utility>
#include<memory>
#include"quicksort.h"
using namespace std;

void quicksort(vector<int> &a, int low, int high) {
	if (high > low){
		int q = partition(a, low, high);
		quicksort(a, low, q - 1);
		quicksort(a, q + 1, high);
	}
}

//!!previously misuse int as indexing number
int partition(vector<int> &a, int l, int  h) {
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
