// int= 4 byte= 32bits(0 to 31)

#include <iostream> 
#include<cmath>
using namespace std;
// division method- 1)divide number by 2
                    // 2) store remainder (That will be bit in binary number)
                    // 3)repeat above steps with the quotient until quotient becomes less than 2
                    // 4) reverse the bit obtained 

int decimalToBinary(int n)
{

    // division method
    
    int i=0;
    int binaryNo=0;
    while(n>0)
    {
        int bits=n%2;
        binaryNo=bits*pow(10,i++) + binaryNo;
        n=n/2;
    }
    return binaryNo;

}

int main()
{
    int n ;
    cin>>n;
    int binary= decimalToBinary(n);
    cout<<binary<<endl;
    return 0;
}