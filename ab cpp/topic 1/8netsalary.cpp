#include <iostream>

using namespace std;
int main(){
float basic , percentallow, percentded,Netsalary;
cout<<"basic salary is ";
cin>>basic;

cout<<"percent allowence ";
cin>>percentallow;

cout<<"percent deduction ";
cin>>percentded;

Netsalary = basic+basic*percentallow/100-basic*percentded/100;

cout<<"Net salary is "<<Netsalary;


}