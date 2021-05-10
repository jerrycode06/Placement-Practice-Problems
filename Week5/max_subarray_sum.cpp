#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     // simple approach
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum = 0;
//     int max_sum = INT32_MIN;
//     for (int i = 0; i<n; i++){
//         sum = 0;
//         for (int j=i; j<n; j++){
//             sum += arr[j];
//         }
//         max_sum = max(max_sum,sum);
//     }
//     cout<<max_sum;
//     return 0;
// }

int main()
{
    // KADANE'S Algorithm 
     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int curr_sum = 0;
    int max_sum = INT32_MIN;
    for(int i = 0; i < n; i++){
        curr_sum += arr[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
        max_sum = max(max_sum,curr_sum);
    }
    cout<<max_sum<<endl;
}