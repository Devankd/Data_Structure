#include<iostream>
using namespace std;

int main()
{
    char R[100];
    cout<<"Enter your full name ";
    cin.get(R,100);    
    cout<<endl<<" Welcomes "<<R;

    cin.ignore();

    char S[100];
    cout<<"Enter your name ";
    cin.get(S,100);      
    cout<<endl<<" Bye "<<S;       // if we will not include cin.(ignore) bw r and s then this will only ask for input of first ie. R and will not ask for input of S and will print whatever in cout of second/third ie. S 
                                  //or use cin.getline(S,100) at place of get+ignore
    cin.ignore();

    
    char Q[100];
    cout<<"Enter your full name ";
    cin.getline(R,100);    
    cout<<endl<<" Welcomes "<<R;

    char T[100];
    cout<<"Enter your name ";
    cin.getline(S,100);      
    cout<<endl<<" Bye "<<S;

    return 0;
}