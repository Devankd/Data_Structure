#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout<<"Size: "<<v.size();
    for(int i=0; i<v.size(); i++)
    {
    cout<<v[i];
    }
    cout<<endl;
}

int main()
{
    // taking input in vector of vector
    int N;
    cout<<"Enter the number of rows: ";
    cin>> N;
    vector<vector<int> > v; //it is an dynamics vector whose row and column are varying
    for(int i=0; i<N; i++)
    {
        int n;
        cout<<"Enter the number of column/element in row "<<i<<": ";
        cin>>n;
        vector<int>temp;
        for(int j=0; j<n; j++)
        {
           int x;
           cin>>x;
           temp.push_back(x);
        }
        v.push_back(temp);   // in this v[i].push_back(x) is wrong way to take input in vector of vector 
    }

    // printing vector of vector

    for(int i=0; i<v.size(); i++)
    {
        printVec(v[i]);
    }
    cout<<endl<<v[0][1];
    return 0;
}
    // Another way to take input

    // int N;
    // cout<<"Enter the number of rows: ";
    // cin>> N;
    // vector<vector<int> > v; //it is an dynamics vector whose row and column are varying
    // for(int i=0; i<N; i++)
    // {
    //     int n;
    //     cout<<"Enter the number of column/element in row "<<i<<": ";
    //     cin>>n;
    //     v.push_back(vector<int> ());  // this line changed  //in vector a empty vector is added, below in empty vector v[i] velue is added
    //     for(int j=0; j<n; j++)
    //     {
    //        int x;
    //        cin>>x;
    //        v[i].push_back(x);  // this line changed 
    //     }                      // temp deleted
    //   }