#include<iostream>
using namespace std;
//Swap function to swap the values stored in two variable
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
//This partition function puts the numbers smaller than the pivot element to the right
//and the greater number to the left
int partition(int a[],int lb,int ub,int n)
{
    int pivot=a[lb],start = lb+1,end=ub;
    do
    {
        while(a[start]<=pivot)
        start++;

        while(a[end]>pivot)
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
        int l=partition(a,lb,ub,n);
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
