// Leetcode- 234
// check pelendrome
 
 #include<iostream>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode* next;
};
 
 bool isPalindrome(ListNode* head) {

        // if only one node is present
        
        if(head->next==NULL)  // in constrain given number of node is b/w [1,10^5] so  head can not be null since minimum number of node will be 1
        return 1;


        ListNode* temp= head;

        // count the number of nodes

        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        count = count/2;


        // breaking list into two list

        ListNode *cur=head, *prev=NULL;
        while(count--)
        {
            prev= cur;
            cur= cur->next;
        }
        prev->next=NULL;

        // reverse second list where cur is working as head 
        // for reversing three pointer needed (prev has no need in first list so made null and using here)
    
        prev=NULL;  // cur is already above
        ListNode* fur=NULL;
        while(cur)
        {
            fur=cur->next;
            cur->next = prev;
            prev= cur;
            cur=fur;
        }

        // head is pointing to first list
        // prev is pointing to second list

        ListNode* head2 = prev, *head1=head;


        // now compare list 1 and 2

        while(head1 && head2)
        {
            if(head1->val != head2->val)
            {
                return 0;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return 1;
    }