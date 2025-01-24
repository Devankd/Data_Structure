#include<iostream>
#include<string.h>
using namespace std;
// method 1- reverse your array and compare to original but this method have time & space complexity is O(n)
// method 2- Two pointer aproach  here t.c.=O(n), n/2 checks & space c=O(1)
bool checkPelendrome(char sentence[])
{
    int i=0;
    int n=strlen(sentence);
    int j=n-1;
    while(i<=j)  // two pointer aproach
    {
        if(sentence[i]!=sentence[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char sentence[100];
    cin.getline(sentence,100);\

    bool ans=checkPelendrome(sentence);

    if(ans==true)
    {
        cout<<sentence<<" : is pelendrome";
    }
    else
    {
        cout<<"Not Pelendorme";
    }
    return 0;

}