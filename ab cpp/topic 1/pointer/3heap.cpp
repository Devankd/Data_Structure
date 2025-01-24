#include<iostream>
using namespace std;
int main()
{
    
    int *p;           //also can do int *p= new int[5]; //p has allocated stack memory
    p= new int[5];     //now allocated heap memory
    p[0]=12;
    p[1]=3;
    cout<<p[1]<<endl;

    delete []p;      //delete array which is in heap.
   
   p= new int[7];     // this is dynamic memory because in same variable p two different values are stored using pointer.
   p[0]=4;
   p[1]=13;
   p[2]=20;
   cout<<p[1];

   delete []p;      // deleting that memory in which is in heap
   p=nullptr;       //to make pointer null it means now pointer p will not point to that memory 

    return 0;

}