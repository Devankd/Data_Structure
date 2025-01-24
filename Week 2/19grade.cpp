#include <iostream>
using namespace std;


char grade(int x)
{
    if(x>90)
    return 'A';
    else if(x>80)
    return 'B';
    else if(x>70)
    return 'C';
    else
    return 'F';
    }

    //using switch
    /*
       switch(marks/10)
       {
        case 9 : return 'A'; break;
        case 8 : return 'B'; break;
        case 7 : return 'C'; break;
        case 6 : return 'D'; break;
        default: return 'E';
       }
    */
int main()
{
    int marks;
    cout<<"Enter the marks ";
    cin>>marks;
    cout<<endl;
    char grad=grade(marks);
    cout<<"grade is "<<grad<<endl;
}
    