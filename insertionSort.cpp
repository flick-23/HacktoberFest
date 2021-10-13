#include <iostream>
using namespace std;
void disp(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
}
// let us taken sample unsorted array as 3 7 1 5 2
void sort(int arr[], int len) // function for sorting
{
    for (int i = 1; i < len; i++)
    {                      // i is starting from 1 so j can be lower than it, here i=1 for 1st iteration
        int curr = arr[i]; // curr = 7
        int j = i - 1;     // j=0
        while (arr[j] > curr && j >= 0)
        { // since j(7)>0 and arr[] is not > 7 ttherefore we will skip to line 20
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr; // here arr[1] = 7 here we will receive the same array as before, and after neccessary iterations we get the sorted array
    }
}
int main()
{
    // int arr[] = {3,7,1,5,2,9,0,4,8,6};
    // int len = 10;
    int len;
    cout << "enter the number of elements: ";
    cin >> len; // no of elements
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cout << "enter the element: ";
        cin >> arr[i]; // elements
    }

    disp(arr, len);
    cout << endl
         << "Array after sorting: ";
    sort(arr, len);
    cout << endl;
    disp(arr, len);
}