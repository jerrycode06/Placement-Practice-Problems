#include <iostream>
using namespace std;

int count_path(int s, int e)
{
    if(s == e)
        return 1;
    if(s > e)
        return 0;
    
    int count = 0;
    for(int i=1; i<=6; i++)
    {
        count += count_path(s+i, e);
    }
    return count;
}

int main()
{
    cout<<count_path(0,6)<<endl;
    return 0;
}