package medium;

public class _19 {

    _19Node head;

    // helper function for adding nodes to test
    public void insert(int val) {
        if (head == null) {
            head = new _19Node(val);
        }
        else {
            _19Node curr = head;
            while(curr.next != null) {
                curr = curr.next;
            }
            curr.next = new _19Node(val);
        }
    }

    public static _19Node removeNthFromEnd(_19Node head, int n) {

        int count = 0;
        _19Node curr = head;

        // count number nodes in the list
        while (curr != null) {
            curr = curr.next;
            count++;
        }

        // caes: no element
        if (count == 0) {
            return null;
        }
        
        n = count - n;
        
        // case: head is to be removed but no next element
        if (n == 0 && head.next == null) {
            return null;
        }

        // case: head is to be removed and next element exist
        if (n == 0 && head.next != null) {
            head = head.next;
            return head;
        }
        
        curr = head; // to traverse from head

        // find the node before the one to be removed
        for (int i = 1; i < n; i++) {
            curr = curr.next;
        }

        curr.next = curr.next.next;
        
        return head;
    }

    public static void main(String[] args) {
        
        _19 list1 = new _19();
        list1.insert(1);
        list1.insert(2);
        list1.insert(3);
        list1.insert(4);
        list1.insert(5);

        _19Node result = removeNthFromEnd(list1.head, 2);

        while(result != null) {
            System.out.println(result.val);
            result = result.next;
        }
    }
}

// Definition for singly-linked list.
class _19Node {
    int val;
    _19Node next;
    _19Node() {}
    _19Node(int val) { this.val = val; }
    _19Node(int val, _19Node next) { this.val = val; this.next = next; }
}

/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
*/
