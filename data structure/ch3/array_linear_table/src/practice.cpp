#include "../include/practice.h"

int main()
{
	Sqlist list;
	//list.data={0,1,2};
	//list.len=3;
	if(!insert(list, 4, 3))
	{
		cout<<"something went wrong when insert"<<endl;
		return -1;
	}
	else
	{
		//for(auto i:list.data)
			//cout<<i<<endl;
		cout<<"value of list after insert:"<<endl;
		for(auto p=begin(list.data);p!=end(list.data);p++)
			cout<<*p<<" ";
		cout<<endl;
	}

	int deleted_e,obtained_e;
	if(!remove(list,2,deleted_e))
	{
		cout<<"something went wrong when delete"<<endl;
		return -1;
	}
	else
	{
		//for(auto i:list.data)
			//cout<<i<<endl;
		cout<<"value of list after delete:"<<endl;
		for(auto p=begin(list.data);p!=end(list.data);p++)
			cout<<*p<<" ";
		cout<<endl;
		cout<<"the number deleted is: "<<deleted_e<<endl;
	}

	if(!getelem(list,2,obtained_e))
	{
		cout<<"something went wrong when delete"<<endl;
		return -1;
	}
	else
	{
		cout<<"the number deleted is: "<<obtained_e<<endl;
	}

}
bool insert(Sqlist &list,size_t i,int elem)
{
	if(i<=0||i>list.len+1)
	{
		cout<<"wrong place to insert"<<endl;
		return false;
	}
	if(list.len==MAXSIZE)
	{
		cout<<"the list has no space left"<<endl;
		return false;
	}
	if(i<=list.len)
		for(size_t k=list.len-1;k>=i;k--)
			list.data[k+1]=list.data[k];
	list.data[i-1]=elem;
	list.len++;
	return true;
}
bool remove(Sqlist &list,size_t i,int &e)
{
	if(list.len==0)
	{
		cout<<"empty list cannot delete member"<<endl;
		return false;
	}
	if(i<1||i>list.len)
	{
		cout<<"wrong place to delete"<<endl;
		return false;
	}
	e=list.data[i-1];
	if(i==list.len)
	{
		list.data[i-1]=0;
	}
	else
	{
		for(size_t k=i-1;k<list.len-1;k++)
			list.data[k]=list.data[k+1];
		list.data[list.len-1]=0;
	}
	list.len--;
	return true;
}
bool getelem(Sqlist list,size_t i,int &e)
{
	if(list.len==0||i<1||i>list.len)
	{
		cout<<"member "<<i<<" doesnot exist"<<endl;
		return false;
	}
	e=list.data[i-1];
	return true;
}

	



