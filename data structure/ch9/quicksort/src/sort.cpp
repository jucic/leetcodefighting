#include "../include/sort.h"

void swap(SqList &L,int i,int j)
{
    int temp=L.r[i];
    L.r[i]=L.r[j];
    L.r[j]=temp;
}
int Partition(SqList &L,int low,int high)
{
    int pivotkey;
    pivotkey=L.r[low];//三数取中，九数取中(三数取中两次)
    while(low<high)
    {
        while(low<high&&pivotkey<=L.r[high])
            high--;
        swap(L,low,high);//采用替换而不是交换的方式(L.r[low]=L.r[high])
        while(low<high&&pivotkey>=L.r[low])
            low++;
        swap(L,low,high);
    }
    return low;
}
void QSort(SqList &L,int low,int high)//可尾递归优化
{
    int pivot;
    if(low<high)//if((high-low)>max_length_insert_sort)//当记录数较少时不采用快速排序，而采用直接插入排序
    {
        pivot=Partition(L,low,high);
        
        QSort(L,low,pivot-1);
        QSort(L,pivot+1,high);
    }
}

int main(int argc,char** argv)
{
    SqList L;
    QSort(L,0,L.length-1);
    for(auto i=0;i<L.length;i++)
        cout<<L.r[i]<<" ";
    cout<<endl;
}
