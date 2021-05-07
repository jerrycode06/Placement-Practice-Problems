/*Given an unsorted array of nonnegative integers, find a continuous subarray which adds to a given number. */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int curr_sum = arr[0];
    int start = 0;

    for (int i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i - 1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        if (curr_sum == sum)
        {
            cout << "Indexes " << start << " " << i - 1 << endl;
            return 0;
        }

        if (i < n)
        {
            curr_sum += arr[i];
        }
    }

    cout << "No Subarray for this sum" << endl;
    return 0;
}