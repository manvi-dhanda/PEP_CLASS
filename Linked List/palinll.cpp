
class Solution {
public:
    typedef ListNode* ln;
    bool isPalindrome(ListNode* head) {
        ln fast = head;
        ln slow = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ln prev = nullptr;
        while (slow) {
            ln next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        while (prev) {
            if (head->val != prev->val) return false;
            head = head->next;
            prev = prev->next;
        }
        return true;
    }
};