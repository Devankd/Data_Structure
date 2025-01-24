#include <iostream>
using namespace std;

int main(){
    int A[7] = {4,8,9,6,5,2,3};
    int n=7, max=A[0];

    for(int i= 0; i<n;i++)
    {
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<max<<"is the max";
    return 0;
    
}