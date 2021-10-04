#include <bits/stdc++.h>
//#include <algorithm>

using namespace std;

int main()
{
	int	K = 3, N = 5;
//int Arr[] = {1, 5, 8, 10};
int Arr[] = {3, 9, 12, 16, 20};

	sort(Arr,Arr+N);
	for(int i=0;i<N;i++)
	{
		if(Arr[i]-K > 0)
		{
			Arr[i] = Arr[i] - K;
			
		}
		else{
			Arr[i] = Arr[i]+K;
		}
	}
//	sort(Arr,Arr+N);
	
	for(int i=0;i<N;i++){
		cout<<Arr[i]<<" ";
	}
	
	int Maxi=0;
	
			
	Maxi = Arr[N-1] - Arr[0];
	
	cout<<Maxi;
	
	
}
