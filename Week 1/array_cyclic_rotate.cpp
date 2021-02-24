#include <bits/stdc++.h>

using namespace std;

void rotate_array(int arr[], int N)
{
	int x = arr[N-1];

    for (int i = N-1; i > 0; i--)
    	arr[i] = arr[i-1];
    arr[0] = x;
}

int main()
{
    int T;
    cout << "Enter number of Test Cases<<" << endl;
    cin >> T;
    while (T--)
    {
        int N;
        cout << "Enter the size of array" << endl;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        rotate_array(arr, N);
        for (int i = 0; i < N; i++)
            cout << arr[i]<<" ";
    }
    return 0;
}