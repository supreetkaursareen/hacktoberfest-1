#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;

}
int partition(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l,j=h,k=0,f=0,g=0;
    while(i<j)
    {
        while(a[i]<=pivot){
           i++;
        }
        while(a[j]>pivot)
        {
        j--;
        }
        if(i<j){swap(&a[i],&a[j]);}
    }
    swap(&a[l],&a[j]);

    return j;
}

void quick(int a[],int l,int h)
{

    if(l<h)
    {
        int p=partition(a,l,h);
        quick(a,l,p-1);
        quick(a,p+1,h);
    }
}

int main()
{
 int a[]={10, 80, 70, 90, 50, 50, 70};
 quick(a,0,6);
 for(int i=0;i<7;i++){cout<<a[i]<<" ";}
 return 0;
}
