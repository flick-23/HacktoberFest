#include<iostream>
using namespace std;

int main()
{
	
int	N = 4, K = 8;
 int arr[] = {1, 5, 7, 1,};
// int arr[] = {1, 1, 1, 1};
 int count=0;
 
 for(int i=0;i<N;i++)
 {
 	for(int j=i+1;j<N;j++)
 	{
 		if(arr[i]+arr[j]==K)
 		{
 			cout<<arr[i]<<arr[j]<<" ";
 			count++;
		}
	}
 }
 
 	cout<<"The pair is ";
	cout<<count;

}
