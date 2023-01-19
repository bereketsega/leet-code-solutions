package easy;

import java.util.Stack;

public class _232 {

    static class MyQueue {
        Stack<Integer> s;
        int l;

        public MyQueue() {
            s = new Stack<>();
            l = -1;
        }

        public void push(int x) {
            s.push(x);
            l++;
        }

        public int pop() {
            if (l > -1) {
                int n = s.remove(0);
                l--;
                return n;
            } else {
                return 0;
            }
        }

        public int peek() {
            return s.get(0);
        }

        public boolean empty() {
            return l == -1;
        }

    }

    // Test
    public static void main(String[] args) {
        MyQueue q = new MyQueue();
        q.push(1);
        q.push(2);
        System.out.println(q.peek()); // Expect: 1
        System.out.println(q.pop()); // Expect: 1
        System.out.println(q.empty()); // Expect: false
    }
}

// Implement a first in first out (FIFO) queue using only two stacks.
// The implemented queue should support all the functions of a normal queue
// (push, peek, pop, and empty).

// Implement the MyQueue class:

// void push(int x) Pushes element x to the back of the queue.
// int pop() Removes the element from the front of the queue and returns it.
// int peek() Returns the element at the front of the queue.
// boolean empty() Returns true if the queue is empty, false otherwise.

// Notes:

// You must use only standard operations of a stack, which means only push to
// top, peek/pop from top, size, and is empty operations are valid.
// Depending on your language, the stack may not be supported natively.
// You may simulate a stack using a list or deque (double-ended queue) as long
// as you use only a stack's standard operations.
