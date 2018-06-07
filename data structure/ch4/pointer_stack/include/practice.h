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
	Node* next;
};
struct LinkStack
{
	StackNode* top;
	int count;
};

bool getelem(linklist list,size_t i,int &e);
bool insert(linklist &list,size_t i,int elem);
bool remove(linklist &list,size_t i,int &elem);
void create_linklist(linklist &list,size_t i);
