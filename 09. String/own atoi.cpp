/*The atoi() function in C takes a string (which represents an integer) as an argument and returns its value of type int. So basically the function is used to convert a string argument to an integer.

Syntax:  

int atoi(const char strn)
Parameters: The function accepts one parameter strn which refers to the string argument that is needed to be converted into its integer equivalent.

Return Value: If strn is a valid input, then the function returns the equivalent integer number for the passed string number. If no valid conversion takes place, then the function returns zero
*/

/*Algorithm:

Initialize the result as 0.
Start from the first character and update result for every character.
For every character update the answer as result = result * 10 + (s[i] – ‘0’)
*/

/ A simple C++ program for
// implementation of atoi
#include <bits/stdc++.h>
using namespace std;
 
// A simple atoi() function
int myAtoi(char* str)
{
    // Initialize result
    int res = 0;
 
    // Iterate through all characters
    // of input string and update result
    // take ASCII character of corresponding digit and
    // subtract the code from '0' to get numerical
    // value and multiply res by 10 to shuffle
    // digits left to update running total
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
 
    // return result.
    return res;
}
 
// Driver code
int main()
{
    char str[] = "89789";
   
    // Function call
    int val = myAtoi(str);
    cout << val;
    return 0;
}
 

//Output
//89789
