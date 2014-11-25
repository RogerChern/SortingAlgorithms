quick.out : quicksort.o main.o ../base/randperm.o
	clang++ -o quick.out quicksort.o main.o ../base/randperm.o -O3
quicksort.o : quicksort.cc
	clang++ -c quicksort.cc -std=c++1y -stdlib=libc++ -O3
main.o : main.cc
	clang++ -c main.cc -std=c++1y -stdlib=libc++ -O3 -I../base
clean :
	rm -r -f *.o *.out
