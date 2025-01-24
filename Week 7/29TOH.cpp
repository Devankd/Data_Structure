#include<iostream>
using namespace std;
//tower of hanoi - GFG

void tohcal(int N, int sour,int help, int dest)
{
    if(N==1)
    {
    cout<<"move disk:-"<<N<<" from rod "<<sour<<" to rod "<<dest<<endl;
    return;
    }

    tohcal(N-1,sour,dest,help);
    cout<<"move disk "<<N<<" from rod "<<sour<<" to rod "<<dest<<endl;
    tohcal(N-1,help,sour, dest);
}

int main()
{
    int N=3;
    int source=1;
    int helper=2;
    int destination=3;
    tohcal(N,source,helper,destination);

}