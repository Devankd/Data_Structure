//s.append("world"),s.insert(3,"kkk"),s.replace(3,5,"aaa"),s.erase(30),s.push_back("z"),s.pop_back(),s1.swap(s2)

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str="Hello ";
    //append
    cout<<str.append("World how  going")<<endl;   //this will add "world how  going" at end after Hello
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    cout<<str.insert(16," is it ",6)<<endl;     // 16 means insert "is it " on 16th index which is after "Hello world how " and add these 6 words " is it "
    
    //replace
    string st="Programming";
    st.replace(3,4,"kk");                       // replace after 3rd index 4 character with kk
    cout<<st<<endl;
    
     // erase
    st.erase();
    cout<<st<<endl;                           // st is now empty
    
    //push_back
    string s="Duniya";
    s.push_back('z');       // can add only single letter at end
    cout<<s<<endl;
    
    //pop_back()
    s.pop_back();         // it is like one backspace
    cout<<s<<endl;
    
    //swap
    string str1="programming ";
    string str2="language";
    str1.swap(str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
    
    return 0;
}