#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

typedef enum{Link,Thread} PointerTag;

typedef struct BiTNode
{
	char data;
	BiTNode *lchild,*rchild;
	PointerTag ltag,rtag;
}BiTNode,*BiTree;
BiTNode* pre;
//typedef BiTNode* BiTree;
//void PreOrderTraverse(BiTree T);
//void PreOrderCreateBiTree(BiTree T);
