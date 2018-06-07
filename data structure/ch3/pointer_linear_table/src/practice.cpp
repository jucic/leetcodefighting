#include "../include/practice.h"

int main()
{
	Node* list=new Node;

	try
	{
		create_linklist(list,5);
	}
	catch(exception e)
	{
		cout<<e.what()<<endl;
		return -1;
	}
	//insert(list,1,2);
	//insert(list,1,4);
	//int removed_member;
	//remove(list,2,removed_member);
	Node* p=list->next;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
bool insert(linklist &list,size_t i,int elem)
{
	Node* p=list;//->next;
	for(size_t k=1;k<i;k++)//search the node i-1
	{
		if(!p)//(ensure *p is not empty)
		{
			cout<<"linklist error:"<<i<<endl;
			return false;
		}
		p=p->next;
	}
	Node* insert_node=new Node;
	insert_node->data=elem;
	insert_node->next=p->next;
	p->next=insert_node;
	return true;
}
bool remove(linklist &list,size_t i,int &elem)
{
	Node* p=list;
	for(size_t k=1;k<i;k++)//search the node i-1
	{
		if(!p)//(ensure *p is not empty)
		{
			cout<<"linklist error:"<<i<<endl;
			return false;
		}
		p=p->next;
	}
	elem=p->next->data;
	p->next=p->next->next;
	delete (p->next);
	return true;
}
bool getelem(linklist list,size_t i,int &e)
{
	Node* p=list->next;
	for(size_t k=1;k<i;k++)
	{
		if(!p)//(ensure *p is not empty)
		{
			cout<<"linklist error:"<<i<<endl;
			return false;
		}
		p=p->next;
		if(!p)//avoid that p is the pointer of last node
		{
			cout<<"no member in number:"<<i<<endl;
			return false;
		}
	}
	e=p->data;
	return true;
}

void create_linklist(linklist &list,size_t i)
{
	//list=static_cast<linklist>(malloc(sizeof(Node)));
	static uniform_int_distribution<unsigned> u(0,9);
	static default_random_engine e(time(0));
	for(size_t k=1;k<=i;k++)
		insert(list,k,u(e));
}



