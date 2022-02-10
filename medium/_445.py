def addTwoNumbers(l1, l2):
    """
    :type l1: ListNode
    :type l2: ListNode
    :rtype: ListNode
    """
    # store elements of the two lists in strings
    fStr = ""
    lStr = ""
    while (l1 != None):
        fStr += str(l1.val)
        l1 = l1.next
    while (l2 != None):
        lStr += str(l2.val)
        l2 = l2.next

    # sum the two strings
    sum = int(fStr) + int(lStr)

    #head and tail pointers
    head = ListNode()
    tail = ListNode()

    # insert each digit to the list nodes
    for d in str(sum):
        new_node = ListNode(d)
        if head.val == 0:
            head = new_node
            tail = new_node
        else:
            tail.next = new_node
            tail = new_node
    return head

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
# Function to insert node
    def insert(root, item):
        temp = ListNode(item)
        
        if (root == None):
            root = temp
        else :
            ptr = root
            while (ptr.next != None):
                ptr = ptr.next
            ptr.next = temp

l1 = ListNode()
l1.insert(7)
l1.insert(2)
l1.insert(4)
l1.insert(3)

l2 = ListNode()
l2.insert(5)
l2.insert(6)
l2.insert(4)

# Test
res = addTwoNumbers(l1, l2)
while res != None:
    print(res.val)
    res = res.next

'''
You are given two non-empty linked lists representing two non-negative integers. 
The most significant digit comes first and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
'''
