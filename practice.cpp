#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40};
    cout<<*arr<<endl;
    int* ptr = arr;
    cout<<"By pointers"<<endl;
    for(int i=0; i<4; i++)
        cout<< *ptr++ <<endl;
    cout<<"By array index"<<endl;
    for(int i=0; i<4; i++)
        cout<< *(arr+i) <<endl;
    return 0;
}