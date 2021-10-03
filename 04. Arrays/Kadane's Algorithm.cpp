#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,-2,5};
//	int arr[] = {-1,-2,-3,-4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int sum=0,max=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=0;
			for(int k=i;k<=j;k++)
			{
				sum = sum + arr[k];
				if(max<sum)
				{
					max=sum;
				}
			}
		}
	}
	
	cout<<max;
}
