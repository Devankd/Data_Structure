#include <iostream>
using namespace std;

// insertion 
// Deletion
// update
// search
class Node
{
    public:
    int data;
    Node* next;  // here next is a pointer which will store address of Node type data ie will store address of next node or next will point to Node(next Node) like int* s; here s is a pointer which will store address of int type data
};

int main()
{   // defining linked list in static way
    Node N1;
    N1.data = 5;   // for static use . (dot)
    N1.next = NULL;
    // dynamic way
    Node *Head;     // Node *Head= new Node(); is also same
    Head= new Node();    // here head store address of current node 
    Head->data =4;     // for dynamic use ->
    Head->next= NULL;  // this current node store data of this node and address of next node
    cout<<Head->data<<endl;
    cout<<(*Head).data<<endl;
    cout<<Head->next<<endl;
    cout<<N1.data;
    return 0;
}