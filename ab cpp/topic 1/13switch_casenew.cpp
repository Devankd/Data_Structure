#include<iostream>

using namespace std;



void DayName(int day)
{

    switch(day)
    {  
        case 4: cout<<"sun";
            break;


        case 5: cout<<"mon";
            break;


        case 6: cout<<"tue";
            break;


        case 7: cout<<"wed";
            break;


        case 8: cout<<"thu";
            break;


        case 9: cout<<"fri";
            break;


        case 10: cout<<"sat";
            break;

            
        default: cout<<"invalid day number";
    }
    
}
int main()
    {
        int day;
        cin>>day;
        DayName(day);
    }

