#include<iostream>
#include <algorithm>
#include<string>

using namespace std;

int main()
{
    string s = "rasengan";

    // Subtract the differences of Ascii values between uppercase and lowercase letters

    // For Uppercase
    // for(int i=0; i<s.length(); i++)
    // {
    //     if(s[i] >= 'a' && s[i] <= 'z')
    //         s[i] -= 32;
    // }
    //   cout<< s <<endl;

    string s2 = "UPPERCASE";
    // For Lowercase
    // for(int i=0; i<s2.length(); i++)
    // {
    //     if(s2[i] >= 'A' && s2[i] <= 'Z')
    //         s2[i] += 32;
    // }
    // cout<< s2 <<endl;

    // From inbuilt function
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<< s <<endl;
    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
    cout<< s2 <<endl;
    return 0;
}