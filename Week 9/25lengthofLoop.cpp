//Find length of loop - GFG

#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
};
int countNodesinLoop(Node *head) {
        // Code here
        Node* slow = head;
        Node* fast = head;
        
        // detect loop
        while(fast!=NULL && fast->next!=NULL)
        {
            slow= slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            break;
        }
        
        // if loop is not present  return false
        if(fast==NULL || fast->next==NULL )
            return 0;
        
        
        // if loop is present 
        int count =1;
        slow = fast->next;  // before this fast and slow were equal
        
        while(slow!=fast) // now slow is moving one step at a time to traverse through loop
        {
            slow = slow->next;
            count++;       // count total number of element present in loop
        }
        return count;
        
}