#ifndef HEAP_H
#define HEAP_H

#include <memory>
#include <vector>
#include <iostream>
using namespace std;

class Heap{
public:
    Heap(vector<int> &&a); //constructor
	void sort();
private:
    void maxheapify(long index);
private:
	vector<int> heap;
    long heap_size;
    
friend void print(const Heap &);
};

void print(const Heap &a);

#endif