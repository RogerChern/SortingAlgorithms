heap.out : heap.o main.o ../base/randperm.o
	g++ -o heap.out heap.o main.o ../base/randperm.o
heap.o : heap.cc
	g++ -c heap.cc -std=c++1y -O3
main.o : main.cc
	g++ -c main.cc -std=c++1y -O3 -I../base
clean :
	rm -r -f *.out *.o
