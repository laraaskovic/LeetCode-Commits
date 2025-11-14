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
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr) return head;
        if (head->next == nullptr) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        //both point at the start

        while ((fast != nullptr) && (fast->next != nullptr)) {
            slow = slow->next; //skips by 1
            fast = fast->next;

            if (fast->next == nullptr) {
                fast = nullptr;
            }
            else
                fast = fast->next; //skips 2
        }

        return slow;
    }
};