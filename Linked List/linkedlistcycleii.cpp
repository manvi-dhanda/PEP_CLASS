
class Solution {
public:
    typedef ListNode* ln;
    ListNode *detectCycle(ListNode *head) {
        ln s = head;
        ln f = head;

        while(s && f && f->next){
            s = s->next;
            f = f->next->next;

            if (s == f) {          
                s = head;
                while (s != f) {
                    s = s->next;
                    f = f->next;
                }
                return s;
            
            }

        }      
            return 0;
    }
};