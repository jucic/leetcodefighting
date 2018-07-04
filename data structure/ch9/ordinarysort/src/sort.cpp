#include "../include/sort.h"

void swap(SqList &L,int i,int j)
{
    int temp=L.r[i];
    L.r[i]=L.r[j];
    L.r[j]=temp;
}

void Bubblesort0(SqList &L)
{
    for(int i=0;i<L.length;i++)
        for(int j=i+1;j<L.length;j++)
            if(L.r[i]>L.r[j])
                swap(L,i,j);
}
void Bubblesort(SqList &L)
{
    for(int i=0;i<L.length;i++)
        for(int j=L.length-1;j>=i;j--)
            if(L.r[j-1]>L.r[j])
                swap(L,j,j-1);
}
void Bubblesort2(SqList &L)
{
    bool flag=true;
    for(int i=0;i<L.length&&flag;i++)
    {
        flag=false;
        for(int j=L.length-1;j>=i;j--)
            if(L.r[j-1]>L.r[j])
            {
                swap(L,j,j-1);
                flag=true;
            }
    }
}
void Selectsort(SqList &L)
{
    int min;
    for(int i=0;i<L.length;i++)
    {
        min=i;
        for(int j=i+1;j<L.length;j++)
            if(L.r[min]>L.r[j])
                min=j;
        if(min!=i)
            swap(L,i,min);
    }
}
void Insertsort(SqList &L)
{
    for(int i=1;i<L.length;i++)
    {
        int temp=i;
        for(int j=i-1;j>=0;j--)
            if(L.r[j]>L.r[temp])
            {
                swap(L,temp,j);
                temp=j;
            }
    }
}
void Shellsort(SqList &L)
{
    int increment=L.length,j,temp;
    do
    {
        increment=increment/3+1;
        for(int i=increment;i<L.length;i++)
        {
            if(L.r[i-increment]>L.r[i])
            {
                temp=L.r[i];
                for(j=i-increment;j>=0&&temp<L.r[j];j-=increment)
                    L.r[j+increment]=L.r[j];
                L.r[j+increment]=temp;
            }
        }
    }
    while(increment>1);
}
int main(int argc,char** argv)
{
    SqList L;
    Shellsort(L);
    for(auto i=0;i<L.length;i++)
        cout<<L.r[i]<<" ";
    cout<<endl;
}
