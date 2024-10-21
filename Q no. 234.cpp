class Solution {
public:
    bool isPalindrome(ListNode* head) {
       if (!head || !head->next) 
       return true; 
       ListNode *a = head, *b = head;
        while (b && b->next) {
            a = a->next;
            b = b->next->next;
        }
        ListNode *prev = nullptr, *current = a;
        while (current) {
            ListNode *nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        ListNode *firstHalf = head;
        ListNode *secondHalf = prev;
         while (secondHalf) {
            if (firstHalf->val != secondHalf->val) {
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        return true; 
    }
};
