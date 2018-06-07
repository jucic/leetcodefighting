#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

#define MAXSIZE 20
typedef int elemtype;
struct Sqlist
{
	elemtype data[MAXSIZE]={0,1,2};
	int len=3;
};

bool getelem(Sqlist list,size_t i,int &e);
bool insert(Sqlist &list,size_t i,int elem);
bool remove(Sqlist &list,size_t i,int &e);
