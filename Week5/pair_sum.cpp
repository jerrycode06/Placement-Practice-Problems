#include <bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int sum){
    int l,r;
    sort(arr, arr+n);

    l = 0;
    r = n-1;
    while(l<r){
        if(arr[l] + arr[r] == sum){
            cout<<l<<" "<<r<<endl;
            return true;
        }
        else if(arr[l] + arr[r] > sum){
            r--;
        }
        else {
            l++;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout << pairsum(arr,n,sum);
    return 0;
}