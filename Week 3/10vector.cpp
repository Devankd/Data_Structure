#include<iostream>
#include<vector>
using namespace std;
// vector is a array whose size is not fixed, it is dynamic array, & it doubles its size wrt its previous size as it needs more space
int main()
{
    // declaration- vector<int>arr
    //initialisation
    vector<int>arr; 
    vector<int>ar(10,20);  //{20,20,20,20,20,20,20,20,20,20}
    vector<int>a(5);   // {0,0,0,0,0}  

    //capacity= total number of elements which we can be store
    // size= total number of stored element
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(19);
    arr.push_back(18);
    arr.push_back(8);
    arr.push_back(15);
    arr.pop_back();
    int size=arr.size();
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    cout<<arr.empty()<<endl;

    int n;
    cin>>n;
    vector<int>v(n,2);

    
    
    return 0;

}