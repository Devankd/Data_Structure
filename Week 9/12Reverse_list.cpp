
 //leetcode 206
 
 // Definition for singly-linked list.
    class ListNode {
        public:
        int val;
        ListNode *next;
    //  ListNode() :val(0), next(nullptr) {}
    //  ListNode(int x) : val(x), next(nullptr) {}
    // ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 


    // function of 3rd(recursion)
    ListNode* reverse(ListNode* curr, ListNode *prev)
    {
        if(curr==nullptr)
        return prev;

        ListNode *fur= curr->next;
        curr->next=prev;
        return reverse(fur, curr);
    }

    //given block of code
    ListNode* reverseList(ListNode* head) {

//3rd way: recursion (reversing whole node)       
        return reverse(head, nullptr);  // will return head




//2nd way: reversing whole node (along with address) doing traversal
        // ListNode *curr=head, *prev=NULL, *fur=NULL;
        // while(curr)
        // {
        //     fur=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=fur;
        // }
        // head=prev;
        // return head;



//1st way: by taking a vector and reversing only values not node
        // vector<int>ans;
        // ListNode  *temp= head;
        // while(temp)
        // {
        //     ans.push_back(temp->val);
        //     temp= temp->next;
        // } 
        // temp=head;
        // int i= ans.size()-1;
        // while(temp)
        // {
        //     temp->val=ans[i];
        //     i--;
        //     temp= temp->next;
        // }
        // return head;
}
