#include "../include/practice.h"

int main()
{
	string s1="abcde",s2="c";
	int index=findsubstring(s1,s2);
	cout<<index<<endl;
}
int findsubstring(string str1,string str2)
{
	for(int i=0;i<str1.size()-str2.size();i++)
	{
		string temp;
		for(int j=0;j<str2.size();j++)
		{
			temp+=str1[i+j];
		}
		if(temp==str2)
		{
			return i+1;
		}
	}
}

	



