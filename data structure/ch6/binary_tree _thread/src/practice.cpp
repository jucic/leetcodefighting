#include "../include/practice.h"

void PreOrderCreateBiTree(BiTree &T)//create
{
	char data;
	cout<<"enter the value";
	cin>>data;
	T=new BiTNode;
	if(data=='#')
	{
		T=nullptr;
	}
	else
	{
		T->data=data;
		PreOrderCreateBiTree(T->lchild);
		PreOrderCreateBiTree(T->rchild);
	}
}
void PreOrderThreading(BiTree T)//threading
{
	if(T==nullptr) return;
	PreOrderThreading(T->lchild);
	if(!T->lchild)
	{
		T->ltag=Thread;
		T->lchild=pre;
	}
	if(!T->rchild)
	{
		T->rtag=Thread;
		T->rchild=T;
	}
	pre=T;
	PreOrderThreading(T->rchild);
}
void InOrderTraverse_thr(BiTree T)
{
	BiTree p=T->lchild;
	while(p!=T)
	{
		while(p->ltag==Link)
			p=p->lchild;
		cout<<p->data;
		while(p->rtag==Thread&&p->rchild!=T)
		{
			p=p->rchild;
			cout<<p->data;
		}
		p=p->rchild;
	}
}
int main()
{
	BiTNode* T=new BiTNode;
	PreOrderCreateBiTree(T);
	PreOrderThreading(T);
	InOrderTraverse_thr(T);
}

	



