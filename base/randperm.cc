#include<utility>
#include<vector>
#include<random>
#include<memory>
#include<ctime>
#include"randperm.h"
using namespace std;

unique_ptr<vector<int>> randperm(int n){
	unique_ptr<vector<int>> pa{ new vector<int>() };
	std::mt19937 randm(time(0));

	for (int i = 0; i < n; ++i){
		pa -> push_back(i);
    }
    
	int temp = 0;
	for (int j = 0; j < n; ++j){
		temp = randm() % (n - j);
		std::swap((*pa)[j], (*pa)[j + temp]);//notice this index shift
	}
	return pa;
}

