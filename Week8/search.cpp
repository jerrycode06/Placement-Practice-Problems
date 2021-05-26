#include <iostream>
using namespace std;

int first_occ(int arr[], int n, int i, int key)
{
    if(i == n){
        return -1;
    }
    
    if(arr[i] == key){
        return i;
    }

    return first_occ(arr, n, i+1, key);
}

int last_occ(int arr[], int n, int i, int key)
{
     if(i == n){
        return -1;
    }
    int restArray = last_occ(arr, n, i+1, key);
    if(restArray != -1)
    {
        return restArray;
    }
    if(arr[i] == key)
    {
        return i;    
    }

    return -1;
}

int main()
{
    int arr[] = {1,2,4,7,2,9,2,10};
    int key;
    cin>>key;
    cout<<first_occ(arr,8,0,key)<<endl;
    cout<<last_occ(arr,8,0,key)<<endl;
    return 0;
}