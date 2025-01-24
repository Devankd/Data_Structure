#include<iostream>
#include<queue>
using namespace std;


class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data= value;
        left=right=NULL; 
    }
};

// in this method binary tree is created level wise means pahle level 0, then level 1 then level 2 created so on


int main()
{
    int x;
    cout<<"Enter the root element: ";
    cin>>x;
    int first, second;
    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);

    //build a binary tree
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        //left node
        cout<<"Enter the left child of "<<temp->data<<" : ";  //temp is parent node whose child left child is first and right child is second
        cin>>first;  // left child node ki value
        if(first != -1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }
        // right node
        cout<<"Enter the right child of "<<temp->data<<" : ";  //temp is parent node whose child left child is first and right child is second
        cin>>second;  // right child node ki value
        if(second != -1)
        {
            temp->right= new Node(second);
            q.push(temp->right);
        }
    }
    return 0;
}

/*
                      1
                 2         3
               4   5     6   7
                    8
for above tree input will be 1 2 3 4 5 6 7 -1 -1 -1 8 -1 -1 -1 -1 -1 -1
*/