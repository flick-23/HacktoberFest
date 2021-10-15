#include <iostream>
#include <stack>
using namespace std;

void reverseString(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string words="";
        while(s[i]!=' ' && i<s.length()){
            words+=s[i];
            i++;
        }
        st.push(words);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s="Hey, how are you doing?";
    cout<<"Orginal Sentence: "<<s<<endl;
    cout<<"Reversed Sentence: ";
    reverseString(s);
    cout<<endl;
    return 0;
}
