#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

typedef int elemtype;
struct StackNode
{
	elemtype data;
	StackNode* next;
};
struct LinkStack
{
	StackNode* top;
	int count;
};

//bool getelem(linklist list,size_t i,int &e);
bool push(LinkStack &list,int elem);
bool pop(LinkStack &list,int &elem);
void create_linkstack(LinkStack &list,size_t i);
