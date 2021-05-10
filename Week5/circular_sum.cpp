#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int curr_sum=0;
    int max_sum = INT32_MIN;
    for(int i=0; i<n; i++){
        curr_sum += arr[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
        max_sum = max(max_sum,curr_sum);
    }
    return max_sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapsum, nowrapsum;
    int totalsum = 0;
    nowrapsum = kadane(arr,n);
    for(int i=0; i<n; i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    // wrapsum = totalsum - (-kadane(arr,n)); because we have inverted sign above 
    wrapsum = totalsum + kadane(arr,n);

    cout << max(wrapsum, nowrapsum) << endl;
}