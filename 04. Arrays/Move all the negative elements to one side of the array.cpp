#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	n=sizeof(arr) / sizeof(arr[0]);
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		if(i!=j)
		{
			int temp = arr[i];
			arr[i]=arr[j];
			arr[j]= temp;
			j++;
		}
		
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
