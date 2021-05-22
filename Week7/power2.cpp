#include <iostream>
using namespace std;

bool isPowerof2(int n)
{
    /*Pattern ->  For every power of 2 - binary form of that number AND a number less by 1 always gives zero 
    Example -> 8 = 1000 , 7 = 0111 -> 1000 & 0111 = 0000 */
    return (n && !(n & n-1));
}

int main()
{
    cout << isPowerof2(32) <<endl;
}