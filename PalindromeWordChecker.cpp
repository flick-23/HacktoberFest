#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of characters : ";
    cin >> n;
    char array[n + 1];
    cin >> array;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[n - 1 - i])
        {
            cout << array << " is not palindrome!" << endl;
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << array << " is palindrome!" << endl;
    }
    return 0;
}