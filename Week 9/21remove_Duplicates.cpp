// GFG- Remove duplicate linkedlist from a sorted list

#include <iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node* next;

};


 Node* removeDuplicates(Node* head) {

    
        
        // 2nd method -> no extra memory is being taken
        // using two pointers
        
        Node* curr = head->next , *prev = head;
        while(curr)
        {
            // if data are equal 
            if(prev->data == curr->data)
            {
                Node* temp = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete temp;
            }
            // if data are not equal
            else{
                prev= prev->next;
                curr = curr->next;
            }
        }
        return head;
        
        
        
        
        // // 1st method
        
        // //taking extra memory space
        
        // vector<int>ans;
        // ans.push_back(head->data);
        // Node* curr = head->next;
        // //inserting all unique data into ans
        // while(curr)
        // {
        //     if(ans[ans.size()-1] != curr->data)
        //     ans.push_back(curr->data);
        //     curr= curr->next;
        // }
        // // from vector inserting unique  value into list
        // curr=head;
        // int index=0;
        // while(index<ans.size())
        // {
        //     curr->data = ans[index];
        //     index++;
        //     curr= curr->next;
        // }
        // int size = ans.size()-1;
        // curr = head;
        // // making last node, where unique element ends, NULL
        // while(size--)
        // {
        //     curr = curr->next;
            
        // }
        // curr->next = NULL;
        // return head;
    }