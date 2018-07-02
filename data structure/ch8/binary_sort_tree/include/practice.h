#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

typedef int elemtype;

typedef struct BiTNode
{
    elemtype data;
    BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
