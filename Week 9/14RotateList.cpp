// Leetcode- 61
// rotate a list by k times right 


  // Definition for singly-linked list.
  class ListNode {
      public:
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr)  //if only one element is present then return head one element remain same after any rotation and if no node is present then how rotation can be done
        {
            return head;
        }

        //count number of nodes
        int count=0;
        ListNode *temp= head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        k=k%count;   // lets number of element count=5 but num of rotation is k=7 so after 5 rotation list will become same as original so rotate only 2 times ie. k=k%count
        
        if(k==0)  // no rotation
        {
            return head;
        }

        count = count-k;//from 
        ListNode* curr=head, *prev=nullptr;
        while(count--)  // post decrement means first count will be checked then will go in loop then decrement
        {
            prev=curr;
            curr= curr->next;
        }// now break b/w prev and curr 
        prev->next=nullptr;
        ListNode *tail=curr;

        //second list ke last node pe jao
        while(tail->next)
        {
            tail= tail->next;
        }

        tail->next=head;
        head= curr;
        return head;
    }// alternate store in vector then 
};