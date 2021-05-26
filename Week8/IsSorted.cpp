#include <iostream>
using namespace std;

bool IsSorted(int arr[], int n)
{
    if(n == 1){
        return true;
    }

    bool restArray = IsSorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray );
}

int main()
{
    int arr[] = {1,2,3,7,9,11};
    if(IsSorted(arr,6))
        cout<<"Yupp, It is sorted"<<endl;
    else
        cout<<"Nope!"<<endl;
    return 0;
}