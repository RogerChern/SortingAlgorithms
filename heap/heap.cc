#include "Heap.h"

Heap::Heap(vector<int> &&a):
    heap(std::move(a)),
    heap_size(0)
{
		heap_size = heap.size();
		//indice begin at 0
		for (long i = heap_size / 2 - 1; i >= 0; --i){
			maxheapify(i);
		}
}

//notice that in this function, just the index moving around
void Heap::maxheapify(long i){
	auto l = 2 * i + 1;
	auto r = 2 * i + 2;
	
    auto largest = i;

    if(l <= heap_size - 1 && heap[l] > heap[i]){
    	largest = l;
    }
	if(r <= heap_size - 1 && heap[r] > heap[largest]){
    	largest = r;
    }
    
	if(i != largest){
		std::swap(heap[largest], heap[i]);
		maxheapify(largest);
	}
}

void Heap::sort(){
    for(long i = heap_size - 1; i > 0; --i){
        std::swap(heap[0], heap[i]);
        heap_size -= 1;
        maxheapify(0);
    }
}

void print(const Heap &a){
    for(auto &x : a.heap){
        cout<< x << ' ';
    }
    cout<<endl;
}