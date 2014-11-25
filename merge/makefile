merge.out : mergesort.o main.o ../base/randperm.o
	clang++ mergesort.o main.o ../base/randperm.o -o merge.out
mergesort.o : mergesort.cpp
	clang++ -c mergesort.cpp -std=c++1y -stdlib=libc++ -O3
main.o : main.cpp
	clang++ -c main.cpp -std=c++1y -stdlib=libc++ -O3 -I../base
