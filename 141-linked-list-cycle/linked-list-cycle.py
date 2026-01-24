# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:

        if head == None: return False
        if head.next == None: return False

        small = head
        big = small.next


        while big is not None and big.next is not None:
            if big == small:
                return True
            
            small = small.next
            big = big.next
            
            if big.next == None:
                return False
            else:
                big = big.next
        
        return False
        