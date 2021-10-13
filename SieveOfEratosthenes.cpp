#include <bits/stdc++.h>
using namespace std;
void primeSieve(int n)
{
    // int N = 1e6 + 2;
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0) //Unmarked
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1; //Marked
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter the range to find the prime number : ";
    cin >> n;
    primeSieve(n);
    return 0;
}