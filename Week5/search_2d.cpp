#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    //For this algorithm row and column elements needs to be sorted

    bool found = false;
    int r = 0, c = m - 1;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
            break;
        }
        else if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "Element present in matrix" << endl;
    }
    else
    {
        cout << "Element not present in matrix" << endl;
    }

    return 0;
}