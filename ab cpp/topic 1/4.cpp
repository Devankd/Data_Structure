//overflow
//bitwise operation
#include<iostream>
using namespace std;
int main()
{
    int x=12,y=25,z;   // 12 = 00001100 (In Binary)
                      //25 = 00011001 (In Binary)

                     //Bitwise AND Operation of 12 and 25

                    /*   00001100
                       & 00011001
                         _________
                         00001000  = 8 (In decimal)*/
    z=x&y;
    cout<<z<<endl;
    int m=5,n;
    n<<1;           /* 5. C++ Right Shift Operator
                        The right shift operator shifts all bits towards the right by a certain number of specified bits. It is denoted by >>.
                        When we shift any number to the right, the least significant(rightmost digit ) bits are discarded, while the most significant bits(leftmost bit) are replaced by zeroes.*/
    return 0;
}