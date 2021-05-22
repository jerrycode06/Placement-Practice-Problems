#include<iostream>
using namespace std;

int setBit(int x, int pos){
    return ((x & (1 << pos)) != 0);
}

void unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0; i<n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    
    int newxor = 0;
    for(int i=0; i<n; i++)
    {
        if(setBit(arr[i],pos-1)){
            newxor = newxor ^ arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(newxor^tempxor)<<endl;
}

int main()
{
    int arr[] = {1,2,3,3,2,1,5,7};
    unique(arr,8);
    return 0;
}