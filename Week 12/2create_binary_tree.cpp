#include<iostream>
#include<queue>
using namespace std;

//binary tree is creating first all left then their right from botom to top 
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

Node* BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1)
       return NULL;
    
    Node *temp = new Node(x);

    //create left child
    cout<<"Enter left child of "<<x<<" ";
    temp->left = BinaryTree();

    //create Right child of
    cout<<"Enter right child of "<<x<<" ";
    temp->right = BinaryTree();

    return temp;
}

int main()
{
    cout<<"Enter the root Node: ";
    Node *root;
    root = BinaryTree();
    return 0;
}

/*
    for input 1,2,3,4,-1,-1,5,-1,-1,6,-1,-1,7,-1,8,9,-1,-1,10,-1,-1

                            1
                         2      7
                      3     6      8
                    4   5        9   10
*/