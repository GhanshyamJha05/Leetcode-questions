/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* current = head;
        int length = 0;
        
        while (current != NULL) {
            length++;
            current = current->next;
        }
         ListNode* p = head;
        ListNode* q = head;
        for(int i=1;i<k;i++)
        {
            p=p->next;
        }
        for(int i=1;i<length-k+1;i++)
        {
            q=q->next;
        }
        swap(p->val,q->val);
        return head;
    }
};
