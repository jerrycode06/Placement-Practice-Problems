// Bit Manipulation
#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
  // n = 5, pos = 2
   /*1) make a bit number => 1 << pos => 0001 << 2 => 0100
     2) Do AND with n => n & 0100 => 0101 & 0100 => 0100
     3) Now check whether it is equal to zero or not and then we get our bit at pos 2 which is 1*/
    return (n & (1 << pos)) != 0;
}

int setBit(int n, int pos)
{
  // n = 5, pos = 1
   /*1) make a bit number => 1 << pos => 0001 << 1 => 0010
     2) Do OR with n => n | 0010 => 0101 | 0010 => 0111
     3) so we have set our bit at pos 1 then we returned it.*/
  return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
  // n = 5, pos = 2
   /*1) make a bit number => 1 << pos => 0001 << 2 => 0100
     2) Then do 1's complement of this number => 0100 => 1011
     3) Do AND with given number and then we cleared our bit at given position => 0101 & 1011 => 0001*/
  int mask = ~(1<<pos); // 1's complement
  return (n & mask);
}

int updateBit(int n, int pos, int value)
{
  // First Clear the bit at given position
  int mask = ~(1 << pos);
  n = n & mask;
  // Then set the bit with given value
  return (n | (value << pos));
}

int main()
{   // Left Shift: Denoted as << 
    /*Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to 
    shift. Or in other words left shifting an integer “x” with an integer “y” denoted as ‘(x<<y)’ is equivalent to 
    multiplying x with 2^y (2 raised to power y). 
    eg: lets take N=22; which is 00010110 in Binary Form.
      Now, if “N is left-shifted by 2” i.e N=N<<2 then N will become N=N*(2^2). Thus, N=22*(2^2)=88 which can be wriiten 
      as 01011000.*/

    // Right Shift:  Denoted as >>
    /*Takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to 
    shift. In other words right shifting an integer “x” with an integer “y” denoted as ‘(x>>y)‘ is equivalent to 
    dividing x with 2^y. 
    eg: lets take N=32; which is 100000 in Binary Form.
     Now, if “N is right-shifted by 2” i.e N=N>>2 then N will become N=N/(2^2). Thus, N=32/(2^2)=8 which can be wriiten 
     as 1000.
    */

   cout<< getBit(8,2)<<endl;
   cout<< setBit(5, 1)<<endl;
   cout<< clearBit(5,2)<<endl;
   cout<< updateBit(5,1,1)<<endl;
   return 0;
}