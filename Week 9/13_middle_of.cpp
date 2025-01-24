// leetcode 876
// return middle , for odd numbers of node return middle
//                 for even numbers of node return d=second middle

class ListNode
{
    public:
    int val;
    ListNode* next;
};

  ListNode* middleNode(ListNode* head) {
    // 2nd way- using slow and fast concept
        ListNode* slow=head, *fast=head;
        while(fast && fast->next)   //ie. while(fast!=NULL && fast->next!=NULL) 
        {
            slow= slow->next;
            fast= fast->next->next;
        }
        return slow;
    

    //1st way- by doing count
        // ListNode *temp=head;
        // int count=0;
        // while(temp)
        // {
        //     count++;
        //     temp=temp->next;
        // }
        // temp=head;
        // count=count/2;
        // while(count--)
        // {
        //     temp=temp->next;
        // }
        // return temp;
    }