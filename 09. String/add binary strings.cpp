/*
Program to add two binary strings

Given two binary strings, return their sum (also a binary string).
Example: 
 

Input:  a = "11", b = "1"
Output: "100" 
We strongly recommend you to minimize your browser and try this yourself first 
The idea is to start from last characters of two strings and compute digit sum one by one. If sum becomes more than 1, then store carry for next digits.
*/

/ C++ program to add two binary strings
#include<bits/stdc++.h>
using namespace std;
 
// This function adds two binary strings and return
// result as a third string
string addBinary(string a, string b)
{
    string result = ""; // Initialize result
    int s = 0;          // Initialize digit sum
 
    // Traverse both strings starting from last
    // characters
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        // Comput sum of last digits and carry
        s += ((i >= 0)? a[i] - '0': 0);
        s += ((j >= 0)? b[j] - '0': 0);
 
        // If current digit sum is 1 or 3, add 1 to result
        result = char(s % 2 + '0') + result;
 
        // Compute carry
        s /= 2;
 
        // Move to next digits
        i--; j--;
    }
    return result;
}
 
// Driver program
int main()
{
    string a = "1101", b="100";
    cout << addBinary(a, b) << endl;
    return 0;
}


//Output:10001



