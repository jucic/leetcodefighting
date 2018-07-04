#include "iostream"

using namespace std;

#define MAXSIZE 10
typedef struct
{
    int r[MAXSIZE+1]={9,1,5,8,3,7,4,6,2};
    int length=9;
}SqList;
void swap(SqList &L,int i,int j);
