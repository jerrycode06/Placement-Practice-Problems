#include <iostream>
using namespace std;

string move_x_last(string s)
{
    if(s.length() == 0)
        return " ";
    
    char ch = s[0];
    string ans = move_x_last(s.substr(1));
    if(ch == 'x')
        return (ans+ch);
    return (ch+ans);
}

int main()
{
    string s = "axxbdxcefxhix";
    cout<<move_x_last(s)<<endl;
    return 0;
}