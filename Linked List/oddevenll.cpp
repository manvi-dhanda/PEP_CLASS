class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenBeg = head->next;
        ListNode* ans = head;
        head = head->next->next;
        

        while(head){
            odd->next = head;
            even->next = head->next;
            odd = odd->next;
            even = even->next;
            head = head->next ? head->next->next : nullptr;
        }
        odd->next = evenBeg;
        return ans;
    }
};