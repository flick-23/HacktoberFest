#include<iostream>

using namespace std;


int reverseOFArray(int arr[], int st,int end)
{
	int is=st,n=end;	
	
	for(int i=st; i<n;i++)
	{
		int temp = arr[n];
		arr[n] = arr[is];
		arr[is] = temp;
		is++;
		n--;
	}

	
	
}

int main()
{
	
	int arr[5] = {1,2,3,4,5};
	int size  = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++)
	
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	cout<<"How Many time you want to Rotate a Arrays : ";
	
	int R;
	cin>>R;
	//Recursive call for for rotate
	
	reverseOFArray(arr,0,size-R-1);
	reverseOFArray(arr,size-R,size-1);
	reverseOFArray(arr,0,size-1);
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
    }

}
