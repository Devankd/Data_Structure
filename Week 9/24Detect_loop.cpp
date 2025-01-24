//detect loop in linked list - GFG
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

// using slow and fast pointer space can be saved



// // The current implementation is using an unordered map to keep track of visited nodes, which results in O(n) time complexity but uses extra space
//     bool detectLoop(Node* head)
//     {
//         Node* curr =head;
//         unordered_map<Node* ,bool> visited;
        
//         // traverse through list
//         while(curr != NULL)
//         {
//             // curr is visited or not
//             if(visited[curr] == 1)
//             return 1;
            
//             visited[curr] =1;
//             curr = curr->next;
//         }
//         return 0;
//     }



// time complexity = O(n2) . unoptimesed code

// // checking whether curr is already visited or not
// bool check(vector<Node*>visited, Node* curr)
//     {
//         for(int i=0; i<visited.size(); i++)
//         {
//             if(visited[i]== curr)
//             return 1;
//         }
        
//         return 0;
//     }
    
    
//     // Function to check if the linked list has a loop.
    
//     bool detectLoop(Node* head) {
//         // your code here
//         Node* curr= head;
//         vector<Node *> visited;
        
//         // traverse node
//         while(curr!=NULL)
//         {
//             // check whether curr is visited or not
//             if(check(visited, curr))
//             return 1;
            
//             visited.push_back(curr);
//             curr = curr->next;
//         }
        
//         // if it return 0 means it is not circular linked list
//         return 0;
        
//     }