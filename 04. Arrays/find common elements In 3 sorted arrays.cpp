#include<iostream>

using namespace std;

int main()
{
	
	int A[] = {3, 4, 15, 20, 30, 70, 80, 120};
	int B[] = {1, 5, 10, 20, 40, 80};
	int C[] = {6, 7, 20, 80, 100};
 
	int A1 = 8;
	int B2 = 6;
	int C3 = 5;
	
	int Com = 0;
	for(int i=0;i<A1;i++)
	{

		for(int j=0;j<B2;j++)
		{
	
			
			if(A[i]==B[j])
			{
				for(int k=0;k<C3;k++)
				{

					if(C[k]==A[i] && C[k]==B[j])
					{
						if(Com==0)
						{
							cout<<"The common elements are ";
							Com++;
						}
						cout<<A[i]<<" ";
					}
				}
				
			}
			
		}
		
	}
	

	
	
	
}

