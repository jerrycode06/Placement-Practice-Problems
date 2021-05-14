#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    //Input Strings
    // string str;
    // string str1(5,'F');
    // string str1;
    // getline(cin, str1);

    //Append
    // string str2 = "Cool";
    // string str3 = "Boy";
    // cout << str2.append(str3) <<endl;

    //Compare
    // string s1 = "abc";
    // string s2 = "xyz";
    // string s2 = "abc";
    // if(!s2.compare(s1)) 
    //     cout<<"Strings are equal"<<endl;
    // cout << s2.compare(s1)<<endl;

    //Empty Function
    // string s1 = "abc";
    // cout<<s1<<endl;
    // s1.clear();
    // if(s1.empty()) cout<<"Strings is empty"<<endl;

    //Erase function
    string s1 = "rasengan";
    // cout<<s1<<endl;
    // s1.erase(3,2);
    // cout<<s1<<endl;

    //Find function
    // cout<<s1.find("sen")<<endl;
    // cout<<s1.find("gan")<<endl;

    //Insert Function
    // s1.insert(5,"chidori");
    // cout<<s1<<endl;

    //length 
    // for(int i=0; i<s1.length(); i++)
    //     cout<<s1[i]<<" ";

    //Substrings
    // cout<< s1.substr(5,3)<<endl;    

    //String to integer
    // string s2 = "65";
    // int x = stoi(s2);
    // cout<< x+4 << endl;

    //Integer to string
    // int x = 69;
    // cout<< to_string(x) + "2" <<endl;
    // return 0;

    //Sorting in strings
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}