#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,c;
    float d, root;
    cout<< "enter three number ";
    cin>>a>>b>>c;
    
    d=b*b-4*a*c;
    if(d==0){
        root=(-b)/(2*a);
        cout<<"roots are real and equal " <<root<<"and"<<root;
    }
    else if(d>0){
    cout<<"roots are real and unequal";  
    cout<<endl<<(-b+ sqrt(d))/(2*a);
    cout<<endl<<(-b- sqrt(d))/(2*a);
    }
    else{
        cout<<"no real roots";
    }
    return 0;
}