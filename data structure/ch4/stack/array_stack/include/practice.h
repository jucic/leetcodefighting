#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

#define MAXSIZE 20
typedef int elemtype;
struct sqstack
{
	elemtype data[MAXSIZE]={};
	int top=-1;
};

bool push(sqstack &stack,int elem);
bool pop(sqstack &stack,int &elem);
bool getelem(sqstack list,size_t i,int &e);
