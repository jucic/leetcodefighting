#include "../include/practice.h"

int main()
{
	SqQueue queue;
	int deleted_e;
	initqueue(queue);
	enqueue(queue,2);
	enqueue(queue,3);
	enqueue(queue,4);
	dequeue(queue,deleted_e);
	if(queue.front<queue.rear)
	{
		for(size_t i=queue.front;i<queue.rear;i++)
			cout<<queue.data[i]<<" ";
		cout<<endl;
	}
	else if(queue.front==queue.rear)
	{
		cout<<"queue is empty"<<endl;
	}
	else
	{
		for(size_t i=queue.front;i<MAXSIZE;i++)
			cout<<queue.data[i]<<" ";
		for(size_t i=0;i<queue.rear;i++)
			cout<<queue.data[i]<<" ";
		cout<<endl;
	}
}
bool initqueue(SqQueue &queue)
{
	queue.front=0;
	queue.rear=0;
	return true;
}
int get_length(SqQueue queue)
{
	return (queue.rear-queue.front+MAXSIZE)%MAXSIZE;
}
bool enqueue(SqQueue &queue,int e)
{
	if((queue.rear+1)%MAXSIZE==queue.front)
	{
		cout<<"queue is already full"<<endl;
		return false;
	}
	queue.data[queue.rear]=e;
	queue.rear=(queue.rear+1)%MAXSIZE;
}
bool dequeue(SqQueue &queue,int &e)
{
	if(queue.front==queue.rear)
	{
		cout<<"queue is empty"<<endl;
		return false;
	}
	e=queue.data[queue.front];
	queue.front=(queue.front+1)%MAXSIZE;
	return true;
}


