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
    ListNode* reverseListHelper(ListNode* head, ListNode* left, ListNode* right) {
        if ((left == right)||(left==right->next)) return head;

        int temp = right->val;
        right->val = left->val;
        left->val = temp;

        ListNode* newR = left;

        while (newR->next != right)
            newR = newR->next;

        return reverseListHelper(head, left->next, newR);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;

        if (head == nullptr) return head;
        if (head->next == nullptr) return head;

        while (curr->next != nullptr) {
            curr = curr->next;
        }
        //curr will point now at the last element in the list
        return reverseListHelper(head, head, curr);


    }
};