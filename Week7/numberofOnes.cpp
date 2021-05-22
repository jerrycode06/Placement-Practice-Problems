#include <iostream>
using namespace std;

int numberOfOnes(int n)
{
    /*Pattern -> When we compare a binary form of a number X and other number Y less by 1 of that X then we found that the rightmost
                 bit of X and values after that rightmost bit is being flipped in the Y. 
     Example  -> 19 = 10011 and 18 = 10010  
                 18 = 10010 and 17 = 10001   
     In this question we will do n & (n-1) until n becomes zero then we get number of ones in a binary number*/
    int count = 0;
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main()
{
    cout<<numberOfOnes(19)<<endl;
    return 0;
}