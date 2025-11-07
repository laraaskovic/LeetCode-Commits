class Solution {
public:
    void deleteNode(ListNode*& head, int value) {
        if (!head) return;
        if (head -> val == value) {
            ListNode* temp = head;
            head = head -> next;
            delete temp;
            return;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr and curr -> val != value) {
            prev = curr;
            curr = curr -> next;
        }
        if (!curr) return;
        prev -> next = curr -> next;
        delete curr;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        int temp = -101;
        bool flag = false;
        if(head == nullptr or head -> next == nullptr) return head;
        ListNode* fast = head -> next;
        ListNode* slow = head;
        while(fast != nullptr){
            if(fast -> val == slow -> val){
                temp = slow -> val;
                fast = fast -> next;
                slow -> next = fast;
            } else{
                if(temp != -101){
                    deleteNode(head, temp);
                    temp = -101;
                }
                slow = fast;
                fast = fast -> next;
            }
        }
        if(temp != -101){
            deleteNode(head, temp);
        }
        return head;
    }
};