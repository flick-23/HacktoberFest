#include <iostream>
using namespace std;
void disp(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
}
void sort(int arr[], int len) // function for selection sort
{

    int temp,count=0;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
    
               
            }
        
            
        }

    }
}
int main()
{
    cout<<"Initally the  elements are: ";
    int arr[] = {3,7,1,5,2};
    int len = 5;
 
    disp(arr, len);
    cout << endl
         << "Array after sorting: ";
    sort(arr, len);
  
    disp(arr, len);

}