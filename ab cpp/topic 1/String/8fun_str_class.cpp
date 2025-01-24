//s.length(),s.size(),s.capacity(),s.resize(30),s.max_size(),s.clear(),s.empty()

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str="Hello";
    
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    cout<<str<<endl;
    str.resize(50);
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;
    str.clear();
    cout<<str.length()<<endl;
    cout<<str<<endl;

    if(str.empty())
    {
        cout<<"string is empty "<<endl;
    }
    else
    cout<<"string is "<<str<<endl;

    string st="";
    cout<<st.length()<<endl;
    return 0;
}