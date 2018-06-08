#include "../include/practice.h"

int main()
{
	sqstack list;//={0,1,2};
	//list.data={0,1,2};
	//list.len=3;
	if(!push(list, 3))
	{
		cout<<"something went wrong when push"<<endl;
		return -1;
	}
	else
	{
		//for(auto i:list.data)
			//cout<<i<<endl;
		cout<<"value of list after push:"<<endl;
		for(auto p=begin(list.data);p!=end(list.data);p++)
			cout<<*p<<" ";
		cout<<endl;
	}

	int deleted_e,obtained_e;
	if(!pop(list,deleted_e))
	{
		cout<<"something went wrong when pop"<<endl;
		return -1;
	}
	else
	{
		//for(auto i:list.data)
			//cout<<i<<endl;
		cout<<"value of list after pop:"<<endl;
		for(auto p=begin(list.data);p!=end(list.data);p++)
			cout<<*p<<" ";
		cout<<endl;
		cout<<"the number poped is: "<<deleted_e<<endl;
	}

	if(!getelem(list,2,obtained_e))
	{
		cout<<"something went wrong when obtain"<<endl;
		return -1;
	}
	else
	{
		cout<<"the number obtained is: "<<obtained_e<<endl;
	}

}
bool push(sqstack &stack,int elem)
{
	if(stack.top==MAXSIZE-1)
	{
		cout<<"stack is full"<<endl;
		return false;
	}
	stack.data[stack.top+1]=elem;
	stack.top++;
	return true;
}
bool pop(sqstack &stack,int &elem)
{
	if(stack.top==-1)
	{
		cout<<"stack is empty"<<endl;
		return false;
	}
	elem=stack.data[stack.top];
	stack.data[stack.top]=0;
	stack.top--;
	return true;
}
bool getelem(sqstack list,size_t i,int &e)
{
	if(list.top==-1||i<1||i>list.top+1)
	{
		cout<<"member "<<i<<" doesnot exist"<<endl;
		return false;
	}
	e=list.data[i-1];
	return true;
}

	



