
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
         ListNode* cur = head;
        for (int i = 0; i < k; i++) {
            if (!cur) return head;
            cur = cur->next;
        }
        ListNode* prev = reverseKGroup(cur, k);
        while (k--) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;   
    }
};