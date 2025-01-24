#include<bits/stdc++.h>
using namespace std;

// character is d


int main()
{

    string str;  // creating string

//  cin>>str;    // due to characterstic of cin, it will not read element after space
    
    getline(cin,str);  // input
    cout<<str<<endl;         // output
    
    cout<<"Length: "<<str.length()<<endl;
    cout<<"is empty: "<<str.empty()<<endl;   // check whether empty or not    
    
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back(); 
    cout<<str<<endl;
    
    // most important- substr() is to take out specific part of string 
    cout<<str.substr(1, 3)<<endl;   // substr is for taking out a substring from str from index 1 and take out 3 element without changing original str


    return 0; 
}