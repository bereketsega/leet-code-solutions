# Definition for singly-linked list.
class _2181Node(object):
    def __init__(self, val=None, next=None):
        self.val = val
        self.next = next

class Solution:

    def __init__(self):
      self.head = None
    # helper function to insert nodes
    def insert(self, val):
        if (self.head == None): 
            self.head = _2181Node(val)
            return
        else:
            curr = self.head
            while(curr.next):
                curr = curr.next
            curr.next = _2181Node(val)
    
    def mergeNodes(self, head):

        res = _2181Node() # head of result linkedlist
        tail = _2181Node() # helper pointer to insert to res
        headTrav = head # to traverse given linkedlist
        sum = 0 # to count values of nodes between zeros

        while(headTrav.next != None):
            if (headTrav.next.val == 0):
                sum+=headTrav.val
                curr = _2181Node(sum)
                # insert to result linkedlist
                if (res.val == None):
                    res = curr
                    tail = curr
                
                else:
                    tail.next = curr
                    tail = curr; 
                
                sum=0 # reset when reach zero node
                
            else:
                # sum values of nodes until zero node
                sum+= headTrav.val
            
            headTrav = headTrav.next

        return res

ll = Solution()
ll.insert(0)
ll.insert(3)
ll.insert(1)
ll.insert(0)
ll.insert(4)
ll.insert(5)
ll.insert(2)
ll.insert(0)

res = ll.mergeNodes(ll.head)

while (res != None):
    print(res.val)
    res = res.next 

'''
You are given the head of a linked list, which contains a series of integers separated by 0's. 
The beginning and end of the linked list will have Node.val == 0.

For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. 
The modified list should not contain any 0's.

Return the head of the modified linked list.
''' 
