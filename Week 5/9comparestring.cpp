#include<bits/stdc++.h>
using namespace std;

bool compareString(string a, string b)
{
    if(a.length()!=b.length())
    {
        return false;
    }
    else
    {
        int j=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]!=b[j])
            {
                return false;
            }
            j++;
        }
    }
    return true;
}



int main()
{

    string a= "Devank";
    string b= "Dubey";   

    cout<<compareString(a,b)<<endl;    // function defined above
    cout<<a.compare(b)<<endl;          // build in function, it compare (a-b) index wise, if a if bigger than b then ans will be 1 otherwise -1
    cout<<b.compare(a)<<endl;

    
    if(a.compare(b) == 0)   // a.compare(b) is build in function 
    {
        cout<<"Both strings are exactly same string "<<endl;
    }
    else
    {
       cout<<"Both strings are different "<<endl;
    }

    string sentence= "My name is Devank Chandra";
    string target="is";
    cout<<sentence.find(target) << endl;  // it will return index value of i, if target not found 


 
    return 0; 
}