# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None: return head
        if head.next == None:
            return head

        prev = head
        head = prev.next #next element
        nxt = head
        prev.next = None       

        while head.next != None:
            nxt = nxt.next
            head.next = prev
            prev = head
            head = nxt

        head.next = prev
        return head
        