class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*current=head;
        ListNode*prev=nullptr;
        while(current!=nullptr)
        {
            if(current->val==val)
            {
                if(prev==nullptr)
                {
                    head=current->next;
                }
                else
                {
                    prev->next=current->next;
                }
            }
            else
            {
                prev=current;
            }
            current=current->next;
        }
        return head;
    }
};
