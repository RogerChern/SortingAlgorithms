quick.out : quicksort.o main.o ../base/randperm.o
	g++ -o quick.out quicksort.o main.o ../base/randperm.o
quicksort.o : quicksort.cc
	g++ -c quicksort.cc -std=c++1y -O3
main.o : main.cc
	g++ -c main.cc -std=c++1y -O3 -I../base
clean :
	rm -r -f *.o *.out
