package medium;

public class _1669 {
    
    ListNode head;
    
    // helper function for testing
    public void insert(int val) {
        if (head == null) {
            head = new ListNode(val);
        }
        else {
            ListNode curr = head;
            while(curr.next != null) {
                curr = curr.next;
            }
            curr.next = new ListNode(val);
        }
    }

    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        
        int indexCounter = 0;
        
        // finding int a node
        ListNode aNode = list1;
        while(indexCounter < a-1) {
            aNode = aNode.next;
            indexCounter++;
        }

        // reset
        indexCounter = 0;

        // finding int b node
        ListNode bNode = list1;
        while(bNode.val < b) {
            bNode = bNode.next;
            indexCounter++;
        }

        aNode.next = list2;

        // finding last node of list2
        ListNode list2End = list2;
        while(list2End.next != null) {
            list2End = list2End.next;
        }
        list2End.next = bNode.next;

        return list1;
        
    }

    // Test
    public static void main(String[] args) {
        _1669 list1 = new _1669();
        list1.insert(0);
        list1.insert(3);
        list1.insert(2);
        list1.insert(1);
        list1.insert(4);
        list1.insert(5);

        _1669 list2 = new _1669();
    
        list2.insert(1000000);
        list2.insert(1000001);
        list2.insert(1000002);

        ListNode result = list1.mergeInBetween(list1.head, 3, 4, list2.head);
        while(result != null) {
            System.out.println(result.val);
            result = result.next;
        }
    }
}


// Definition for singly-linked list.
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

/*
You are given two linked lists: list1 and list2 of sizes n and m respectively.

Remove list1's nodes from the ath node to the bth node, and put list2 in their place.
*/
