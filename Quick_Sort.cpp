#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int part(int a[],int lb,int ub,int n)
{
    int p=a[lb],start = lb+1,end=ub;
    do
    {
        while(a[start]<=p )
        start++;

        while(a[end]>p)
        end--;

        if(start<end)
        swap(&a[start],&a[end]);
        
    }while(start<end);

    swap(&a[lb],&a[end]);
    return end;
}
void quicksort(int a[],int lb,int ub,int n)
{
    if(lb<ub)
    {  
        int l=part(a,lb,ub,n);
        quicksort(a,lb,l-1,n);
        quicksort(a,l+1,ub,n);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: \n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    quicksort(a,0,n-1,n);
    
    cout<<"Sorted Array: \n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}