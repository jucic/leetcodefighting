#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

#define MAXSIZE 20
typedef int elemtype;
struct SqQueue
{
	elemtype data[MAXSIZE];
	int front;
	int rear;
};

bool initqueue(SqQueue &queue);
int get_length(SqQueue queue);
bool enqueue(SqQueue &queue,int e);
bool dequeue(SqQueue &queue,int &e);
