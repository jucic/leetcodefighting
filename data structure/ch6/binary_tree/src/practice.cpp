#include "../include/practice.h"

void PreOrderTraverse(BiTree T)
{
	if(T==nullptr) return;
	cout<<T->data<<" ";
	PreOrderTraverse(T->lchild);
	PreOrderTraverse(T->rchild);
}
void PreOrderCreateBiTree(BiTree &T)
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
int main()
{
	BiTNode* T=new BiTNode;
	PreOrderCreateBiTree(T);
	PreOrderTraverse(T);
}

	



