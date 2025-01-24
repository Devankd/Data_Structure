#include<iostream>
#include<string>
#include<vector>
using namespace std;


void printvec(vector<int>v)
{
    cout<<"size: "<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<< v[i]<<" ";   //
    }
    cout<<endl;
}

    int main()
    {
    // Arrays of vector: here number of rows are constant where columns are dynamic
    cout<<"Array of Vector "<<endl;
    vector<int> v1[10];   // here 10 vectors are formed with empty value
    
    // int A[2][3]; it is an 2d array whose number of rows and columns are fixed 
    int N;
    cout<<"Enter Numbers of vector in Array: ";
    cin>>N;

    vector<int>v[N];       // it behaves like a 2d vector whose rows are fixed but column is varying 
    for(int i=0; i<N ; i++)  // here N numbers of vectors(Number of element in array ) will form having n elements in each vectors 
    {
        int n;
        cout<<"Enter the number of elements in vector "<<i<<": ";
        cin >> n;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);

        }
    }
    for(int i=0; i<N; i++)
    {
        printvec(v[i]);
    }
    cout<<endl<<"Element at row= 0 and column= 1 is: ";
    cout<<v[0][1];  // it will print element of N=0 and n=1 ; 
    return 0;
}