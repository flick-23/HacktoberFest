#include <bits/stdc++.h>
using namespace std;
int hexaDecimalToDecimal(string n)
{
    int decimal_Number = 0, radix = 1;
    int a = n.size();
    for (int i = a - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9') // String is an array of characters
        {
            decimal_Number += (n[i] - '0') * radix;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            decimal_Number += (n[i] - 'A' + 10) * radix;
        }
        radix *= 16;
    }
    return decimal_Number;
}
int main()
{
    string n;
    cout << "Please enter the Hexadecimal number : ";
    cin >> n;
    cout << hexaDecimalToDecimal(n);
    return 0;
}