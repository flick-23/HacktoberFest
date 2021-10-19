// Hackerrank - Big Sorting

#include <bits/stdc++.h>
using namespace std;

// Failed for many test-cases
// bool comp(string str1, string str2)
// {
//     int n1 = str1.length(), n2 = str2.length();

//     if (n1 < n2)
//         return true;

//     if (n2 < n1)
//         return false;

//     for (int i = 0; i < n1; i++)
//     {
//         if (str1[i] < str2[i])
//             return true;

//         else
//             return false;
//     }
//     return false;
// }

// void sortlarge(string arr[], int n)
// {
//     sort(arr, arr + n, comp);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     string s[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i];
//     }

//     sortlarge(s, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << s[i] << " ";
//     }

//     return 0;
// }

//- Using Lambda Function inside sort function.
int main()
{
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for (int unsorted_i = 0; unsorted_i < n; unsorted_i++)
    {
        cin >> unsorted[unsorted_i];
    }

    sort(unsorted.begin(), unsorted.end(), [](const string &a, const string &b)
         {
             if (a.length() != b.length())
             {
                 return a.length() < b.length();
             }
             return a < b;
         });

    for (auto x : unsorted)
        cout << x << endl;

    return 0;
}