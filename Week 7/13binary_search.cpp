#include<iostream>
#include<vector>

using namespace std;

int binary_search(vector<int>v, int key, int start,int end)
{
    if(start> end)
    return 0;

    int mid=start-(start-end)/2;
    if(v[mid]==key) return mid;
    else if(v[mid]>key) return binary_search(v, key, start, mid-1);
    else return binary_search(v, key, mid+1, end);
}


int main()
{
    vector<int>v{2,4,6,9,13,24,27};
    
    int key;
    cin>>key;
    
    int start=0;
    int end= v.size()-1;
    int mid;

    int ans = binary_search(v, key, start,end);
    if(ans==0) {cout<<"Not found";}
    else 
    cout<<"Index is: "<<ans;
    return 0;
}

//Linear search
int  linearSearch( vector<int>A, int i, int N, int x)  // here x to be searched in A vector
{

}