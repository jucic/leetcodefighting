#include <iostream>

using namespace std;

int main(int argc,char**argv)
{
	string str("some string");
	int a[12]={};
	//for(auto &c:str)
		//c=toupper(c);
	int *end=&a[12];
	for(int *i=a;i!=end;++i)
		cout<<*i<<endl;
	//auto a=str.size();
    //cout<<a<<endl;//不会改变str中字符的值
}





