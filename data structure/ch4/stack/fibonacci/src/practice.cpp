#include "../include/practice.h"

vector<unsigned> fiboarray;
int fibonacci(int i)
{
	if(i<2) return i?1:0;
	return fibonacci(i-1)+fibonacci(i-2);
}
int main()
{
	for(size_t i=0;i<20;i++)
		cout<<fibonacci(i)<<" ";
	cout<<endl;
}





