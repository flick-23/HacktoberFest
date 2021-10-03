#include<iostream>
using namespace std;


int main()
{

	int arr[] = {4, 2, -3,1,6};
    int N = sizeof(arr)/sizeof(arr[0]);

	int Sum = 0;
 
 for(int i=0;i<N;i++)
 {
 	
 	for(int j=i;j<N;j++)
 	{ 
 	Sum=0;
 		for(int k=i;k<=j;k++)
 		{
 			
 			Sum += arr[k];
			cout<<arr[k]<<" ";
 			if(Sum==0)
 			{
 				
 				cout<<" The sum is 0 ";
 				return 0;		
			 }
	
	     }
	     cout<<"\tThe Sum is = "<<Sum;
	     cout<<endl;
	 	     
	     
		 
	 }
 }
}
