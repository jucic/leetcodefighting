#include "../include/practice.h"

int main()
{
	//linkqueue* queue=new linkqueue;
	Node* node=new Node;
	linkqueue queue={node,node};
	try
	{
		//enqueue(queue,3);
		//enqueue(queue,4);
		int de_e;
		create_linkqueue(queue,5);
		deque(queue,de_e);
	}
	catch(exception e)
	{
		cout<<e.what()<<endl;
		return -1;
	}
	Node* p=queue.front->next;//remove the header pointer.
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
bool enqueue(linkqueue &queue,int elem)
{
	Node* insert_node=new Node;
	insert_node->data=elem;
	insert_node->next=queue.rear->next;//or =nullptr
	queue.rear->next=insert_node;
	queue.rear=insert_node;
	return true;
}
bool deque(linkqueue &queue,int &elem)
{
	if(queue.front==queue.rear)
	{
		cout<<"empty queue"<<endl;
		return false;
	}
	Node* delete_node=queue.front;
	elem=queue.front->data;
	queue.front=queue.front->next;
	delete (delete_node);
	return true;
}

void create_linkqueue(linkqueue &list,size_t i)
{
	//list=static_cast<linklist>(malloc(sizeof(Node)));
	static uniform_int_distribution<unsigned> u(0,9);
	static default_random_engine e(time(0));
	for(size_t k=1;k<=i;k++)
		enqueue(list,u(e));
}



