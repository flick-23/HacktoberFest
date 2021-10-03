#include<iostream>
using namespace std;


int main()
{
//int N=10,arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
int arr[] = {1, 2, 3,4};
    int N = sizeof(arr)/sizeof(arr[0]);

int count = 0;
 int result=0;
 
 for(int i=0;i<N;i++)
 {
 	
 	for(int j=i;j<N;j++)
 	{ 
 	count=0;
 		for(int k=i;k<=j;k++)
 		{
 			count+=arr[k];
 			cout<<arr[k]<<" ";
 			
		 }
		 result+= count;
		 cout<<endl;
	 }
 }
  			cout<<result<<" Sum of all subarrays\n";

 
 
 // All  Subarrays are:
 for(int i=0;i<N;i++)
 {
 	
 	for(int j=i;j<N;j++)
 	{
 		for(int k=i;k<=j;k++)
 		{
 	
 			cout<<arr[k]<<" ";
 			
		 }
		 cout<<endl;
	 }
 }


 
}




