package medium;

/**
 * _2
 */
public class _2 {
    // Definition for singly-linked list.
    static class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    ListNode res = null;
    ListNode resTrav = res;

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        // to traverse
        ListNode l1Trav = l1;
        ListNode l2Trav = l2;
        
        // both list have element
        while (l1Trav != null && l2Trav != null) {
            int sum = l1Trav.val + l2Trav.val;
            
            addEachDigit(l1Trav, l2Trav, sum);

            l1Trav = l1Trav.next;
            l2Trav = l2Trav.next;
        }
        // only list1 has element
        while (l1Trav != null) {
            
            addEachDigit(l1Trav, l2Trav, l1Trav.val);

            l1Trav = l1Trav.next;
        }
        // only list2 has element
        while (l2Trav != null) {
            
            addEachDigit(l1Trav, l2Trav, l2Trav.val);

            l2Trav = l2Trav.next;            
        }
        return res;
    }

    public void addEachDigit(ListNode l1Trav, ListNode l2Trav, int sum) {
        // when sum is one digit
        if (sum < 10) {
            // add sum to result list
            if (res == null) {
                res = new ListNode(sum);
                resTrav = res;
            }
            else {
                ListNode newNode = new ListNode(sum);
                resTrav.next = newNode;
                resTrav = newNode;
            }
        }
        // when sum is two digit
        else {
            int last = sum % 10; // to add ones place

            if (res == null) {
                res = new ListNode(last);
                resTrav = res;
            }
            else {
                ListNode newNode = new ListNode(last);
                resTrav.next = newNode;
                resTrav = newNode;
            }
        }
        // add carry out
        if (l1Trav != null && l1Trav.next != null) {
            l1Trav.next.val += sum / 10;
        }
        else if (l2Trav != null && l2Trav.next != null) {
            l2Trav.next.val += sum / 10;
        }
        else if (sum / 10 != 0) {
            ListNode lastNode = new ListNode(sum / 10);
            resTrav.next = lastNode;
            resTrav = lastNode;
        }
    }

    public static void main(String[] args) {
        _2 s = new _2();

        _2.ListNode l1 = new _2.ListNode(2);l1.next = new _2.ListNode(4);l1.next.next = new _2.ListNode(3);
        _2.ListNode l2 = new _2.ListNode(2);l2.next = new _2.ListNode(6);l2.next.next = new _2.ListNode(4);
        
        _2.ListNode sum = s.addTwoNumbers(l1, l2);

        while (sum != null) {
            System.out.print(sum.val + " ");
            sum = sum.next;
        }
    }

}

/*
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/
