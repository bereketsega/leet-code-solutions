
class MinStack:

    def __init__(self):
        self.stack = [] # keeps track of all elements
        self.minStack = [] # keeps list of latest min elements

    def push(self, val: int) -> None:
        self.stack.append(val)
        # if minStack is empty, append val else append min of val and current min of minStack
        self.minStack.append(min(val, self.minStack[-1] if self.minStack else val))
    def pop(self) -> None:
        self.stack.pop()
        self.minStack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minStack[-1]
    

minStack = MinStack()
minStack.push(-2)
minStack.push(0)
minStack.push(-3)
print(minStack.getMin()) # return -3
print(minStack.pop()) # remove -3 return None
print(minStack.top()) # return 0
print(minStack.getMin()) # return -2

'''
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

    MinStack() initializes the stack object.
    void push(int val) pushes the element val onto the stack.
    void pop() removes the element on the top of the stack.
    int top() gets the top element of the stack.
    int getMin() retrieves the minimum element in the stack.

You must implement a solution with O(1) time complexity for each function.
'''
