class Solution {
public:
    Node* sortedInsert(Node* head, int key) {
        
        if (key <= head->data) {
            Node* nd = new Node(key);
            nd->next = head;
            return nd;
        }

        Node* cur = head;
        while (cur->next && cur->next->data < key) {
            cur = cur->next;
        }

        Node* nd = new Node(key);
        nd->next = cur->next;
        cur->next = nd;

        return head;
    }
};