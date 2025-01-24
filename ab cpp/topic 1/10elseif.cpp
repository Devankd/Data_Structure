#include <iostream>

using namespace std;
int main(){
    int day;
    cout<<"enter day no ";
    cin>>day;
    if(day == 2){
        cout<<"monday";
    }
   else if(day == 3){
        cout<<"tuesday";
    }
    else if(day == 4){
        cout<<"wednesday";
    }
   else if(day == 5){
        cout<<"Thursday";
    }
   else if(day == 6){
        cout<<"friday";
    }
    else if(day == 7){
        cout<<"saturday";
    }
    else if(day == 8){
        cout<<"sunday";
    } 
   else{
    cout<<"invalid input";
   }
    return 0;
}