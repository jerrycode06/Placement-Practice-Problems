#include <bits/stdc++.h>
using namespace std;

int* pairsum(int arr[], int n, int sum){
    int l,r;
    sort(arr, arr+n);

    l = 0;
    r = n-1;
    while(l<r){
        if(arr[l] + arr[r] == sum){
            int* res = new int[2];
            res[0] = l;
            res[1] = r;
            return res;
        }
        else if(arr[l] + arr[r] > sum){
            r--;
        }
        else {
            l++;
        }
    }
    return NULL;
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

    int* res = pairsum(arr,n,sum);
    cout << res[0]<<" "<<res[1];
    return 0;
}