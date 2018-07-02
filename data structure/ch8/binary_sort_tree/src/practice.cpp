#include "../include/practice.h"

bool Search_BST(BiTree T,int key,BiTree f,BiTree &p)
{
    if(!T)
    {
        p=f;
        return false;
    }
    else if(T->data==key)
    {
        p=T;
        return true;
    }
    else if(T->data>key)
        return Search_BST(T->lchild,key,T,p);
    else
        return Search_BST(T->rchild,key,T,p);
}
bool Insert_BST(BiTree &T,int key)
{
    BiTree p,s;
    if(!Search_BST(T,key,nullptr,p))
    {
        s=new BiTNode;
        s->data=key;
        s->lchild=s->rchild=nullptr;
        if(!p)
            T=s;
        else if(key<p->data)
            p->lchild=s;
        else
            p->rchild=s;
        return true;
    }
    else
        return false;
}
bool Inorder_Traverse(BiTree T)
{
    if(!T)
        return false;
    Inorder_Traverse(T->lchild);
    cout<<T->data<<endl;
    Inorder_Traverse(T->rchild);
    return true;
}
int main(int argc,char** argv)
{
    BiTree T=new BiTNode;
    T=nullptr;
    int a[]={62,88,58,47,35,73,51,99,37,93};
    for(auto i=begin(a);i!=end(a);i++)
        Insert_BST(T,*i);
    Inorder_Traverse(T);
}
	



