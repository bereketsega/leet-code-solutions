from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def hasCycle(head: Optional[ListNode]) -> bool:
    # fast and slow pointers
    fast = slow = head

    while fast and fast.next:

        fast = fast.next.next # jumps 2x
        slow = slow.next

        if fast is slow:
            # fast meets slow :-> circle
            return True

    return False
    

# Test 
l=ListNode(3)
for i in [2,0,-4]:
    l.next=ListNode(i)
    l=l.next
    
l.next=l # circle

print(hasCycle(l)) # True

'''
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. 
Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.
'''
