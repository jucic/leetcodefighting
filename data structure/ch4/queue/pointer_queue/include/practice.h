#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

typedef int elemtype;
struct Node
{
	elemtype data;
	Node* next;
};
struct linkqueue
{
	Node* front;
	Node* rear;
};

bool enqueue(linkqueue &queue,int elem);
bool deque(linkqueue &queue,int &elem);
void create_linkqueue(linkqueue &list,size_t i);
