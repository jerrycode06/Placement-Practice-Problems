#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
        return true;

    return false;
}

bool ratInMaze(int **arr, int x, int y, int n, int **solnArray)
{
    if (x == n - 1 && y == n - 1)
    {
        solnArray[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solnArray[x][y] = 1;
        if (ratInMaze(arr, x + 1, y, n, solnArray))
        {
            return true;
        }
        if (ratInMaze(arr, x, y + 1, n, solnArray))
        {
            return true;
        }
        solnArray[x][y] = 0; // Backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n]; // Made an initial dynamic 2D array
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solnArray = new int *[n]; // Made a 2D solution array
    for (int i = 0; i < n; i++) 
    {
        solnArray[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solnArray[i][j] = 0;
        }
    }

    cout << "Result =>" <<endl;

    if (ratInMaze(arr, 0, 0, n, solnArray)) // Real algorithm begins here
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solnArray[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

/* Input - 0 = block, 1 = clear 
    1 0 1 0 1
    1 1 1 1 1
    0 1 0 1 0
    1 0 0 1 1
    1 1 1 0 1
*/