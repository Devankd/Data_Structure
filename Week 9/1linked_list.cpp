#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    // this is like a pointer which is setting value of data=0 and next=NULL at address
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }


};

void print(Node* head)
{
    Node* temp =head;
    while(temp != NULL)
    {
        cout<< temp->data <<" ";  // print kro data => pointer ko aage badao => jb pointer is null ruk jao 
        temp = temp->next;
    }
}


int main()
{
    Node a1(5);  // statically constructor is called
    //Node is like student and first is like s1, second is like s2;

    //dynamically constr is called
    Node* first = new Node(10);   // this will create a node whose pointer is pointing to null and data is 10  // first ka next is pointing to null 
    Node* second = new Node(20);  // second ka next is pointing to null 
    Node* third = new Node(30);   //similaraly
    Node* fourth = new Node(40);
    Node* fifth = new Node(50); 
    
    //in class when pointer is there then at place of .(dot) (->) is used
    first->next= second;      // first ke next(next memory location me) me second (second ka memory location daal do) ko daal do NULL ke jagah  // means first is pointing to second
    second-> next= third;     // second ke next me third ko daal do    // means second is pointing to third   NULL ke jagah
    third-> next= fourth;     // third ke next me fourth ko daal do    // means third is pointing to fourth
    fourth->next = fifth;     // fourth is pointing to fifth
                              // fifth is pointing to null
   
    // printing 
    cout<<"Printing the linked list "<<endl;
    print(first);
    return 0;
}