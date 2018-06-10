//#include "../include/practice.h"

#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

struct BiTNode
{
	char data;
	BiTNode *lchild,*rchild;
};
BiTNode *BiTree;
void PreOrderTraverse(BiTree T)
{
	if(T=nullptr) return;
	cout<<T->data<<" ";
	PreOrderTraverse(T->lchild);
	PreOrderTraverse(T->rchild);
	return;
}
void PreOrderCreateBiTree(BiTree T)
{
	char data;
	cout<<"enter the value";
	cin>>data;
	if(data=='#')
	{
		T=nullptr;
	}
	else
	{
		BiTNode *newnode=new BiTNode;
		newnode->data=data;
		T=newnode;
		PreOrderCreateBiTree(T->lchild);
		PreOrderCreateBiTree(T->rchild);
	}
	return;
}
int main()
{
	BiTNode T=new BiTNode;
	PreOrderCreateBiTree(&T);
	//PreOrderTraverse(T);
}

	



