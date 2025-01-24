#include<iostream>
using namespace std;

int main()
{
    char R[100];
    cout<<"Enter your full name ";
    cin.get(R,100);      // use cin.get(R,100) with ignore(); or use cin.getline(R,100) 
    cout<<"\n Welcomes "<<R;

    return 0;
}