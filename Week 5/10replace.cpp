#include<iostream>
using namespace std;
#include<string>

int main()
{
    string str = "This is my First Message";
    string word="Ramana";

    str.replace(0,4, word);   // from 0 index remove 4 words(eg. this) and add word(Ramana,does not matter how long is it) 
    cout<< str <<endl;

    str.replace( 13, 5, "Second");
    cout<< str <<endl;

    string arr="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    arr.erase(10,9);   // first 10 denote index from where deletion will start and 9 denote number of word will deleted // from k to s will be deleted
    cout<<arr<<endl;

    return 0;
}