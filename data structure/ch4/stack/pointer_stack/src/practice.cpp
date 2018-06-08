#include "../include/practice.h"

int main()
{
	LinkStack* stack=new LinkStack;

	try
	{
		create_linkstack(*stack,6);
	}
	catch(exception e)
	{
		cout<<e.what()<<endl;
		return -1;
	}
	/*push(*stack,1);
	push(*stack,2);
	int popped;
	if(pop(*stack,popped))
		cout<<"popped nomber:"<<popped<<endl;*/
	StackNode* p=stack->top;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
bool push(LinkStack &list,int elem)
{
	StackNode* insert_node=new StackNode;
	insert_node->data=elem;
	insert_node->next=list.top;
	list.top=insert_node;
	list.count++;
	return true;
}

bool pop(LinkStack &list,int &elem)
{
	StackNode* p;
	if(!list.top)
	{
		cout<<"stack is empty"<<endl;
		return false;
	}
	p=list.top;
	elem=list.top->data;
	list.top=list.top->next;
	delete p;
	list.count--;
	return true;
}
/*
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
}*/

void create_linkstack(LinkStack &list,size_t i)
{
	//list=static_cast<linklist>(malloc(sizeof(Node)));
	static uniform_int_distribution<unsigned> u(0,9);
	static default_random_engine e(time(0));
	for(size_t k=1;k<=i;k++)
		push(list,u(e));
}




