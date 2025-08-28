#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>>v;  // keep space between two >

    vector<int>a{1,2,3};
    vector<int>b{1,8,7};
    vector<int>c{15,12,23};

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)  // if number of element in a,b,c are same then at place of v[i].size(), can write v[0].size(), or any digit
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
