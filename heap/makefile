heap.out : heap.o main.o ../base/randperm.o
	clang++ -o heap.out heap.o main.o ../base/randperm.o -O3
heap.o : heap.cc
	clang++ -c heap.cc -std=c++1y -stdlib=libc++ -O3
main.o : main.cc
	clang++ -c main.cc -std=c++1y -stdlib=libc++ -O3 -I../base
clean :
	rm -r -f *.out *.o
