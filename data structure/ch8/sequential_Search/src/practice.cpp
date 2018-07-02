#include "../include/practice.h"

int Sequential_Search(int* a,int n,int key);

int Binary_Search(int *a,int n,int key)
{
    int min=0,max=n-1,mid;
    mid=(min+max)/2;
    while(min<=max)
    {
        if(a[mid]<key)
            min=mid+1;
        else if(a[mid]>key)
            max=mid-1;
        else
            return mid;
        mid=(min+max)/2;
    }
    return 0;
}
int main(int argc,char** argv)
{
    int a[]={1,2,3,4,5,6,7,8};
    cout<<"sequential search: "<<Sequential_Search(a,5,2);
    cout<<"binary search: "<<Binary_Search(a,5,4);
}
int Sequential_Search(int* a,int n,int key)
{
    a[0]=key;
    int i=n-1;
    while(a[i]!=key)
        i--;
    return i;
}
	



