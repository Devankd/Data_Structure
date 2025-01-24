#include<iostream>
#include<vector>
using namespace std;
// this is josephus problem or predict the winner 
// each person are sitted in circular manner now counting start form 1 goes to 3rd(1+3-1) person of 1 that is 3. kills 3 and start process from 4
// atlast who will survive

int Predict_win(vector<bool>&person, int n, int person_left, int index,int k)
{
    if(person_left==1)
    {
        for(int i=0; i<n; i++)
        {
        if(person[i]==0)
        return index;
        }
    }

    int kill=kill%person_left;


}

int main()
{
    vector<bool>person(6,0);
    int k=3;  // starting from 1 kill (1+3-1)=3rd of 1 that is 3 then go to 4 and kill (4+3-1)=6 and so on in circular manner
    int ans= Predict_win(person,6,6, 0, k);
}