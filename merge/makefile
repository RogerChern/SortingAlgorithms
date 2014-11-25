merge.out : mergesort.o main.o ../base/randperm.o
	g++ mergesort.o main.o ../base/randperm.o -o merge.out
mergesort.o : mergesort.cpp
	g++ -c mergesort.cpp -std=c++1y -O3
main.o : main.cpp
	g++ -c main.cpp -std=c++1y -O3 -I../base

clean : 
	rm -r -f *.o *.out
