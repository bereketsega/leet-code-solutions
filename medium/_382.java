package medium;

public class _382 {

    _382Node head;
    private int listLen = 0; // count number of nodes
    private _382Node curr; // to traverse list
    private _382Node tempHead; // temporarily store head
    private int randNode; // random node value

    // helper function for testing
    public void insert(int val) {
        if (head == null) {
            head = new _382Node(val);
        }
        else {
            _382Node curr = head;
            while(curr.next != null) {
                curr = curr.next;
            }
            curr.next = new _382Node(val);
        }
    }

    public void solution(_382Node head) {
        // count number of nodes
        curr = head;
        tempHead = head;
        // traverse list and count
        while (curr != null) {
            listLen++;
            curr = curr.next;
        }
        
    }
    
    public int getrandNodeom() {
        // random number between 0 - listLen
        int randNodeIndex = (int) (Math.random()*(listLen)) ;
        curr = tempHead; // to traverse list again
        int i = 0; // to find random number
        // traverse until the random index
        while (curr != null && i <= randNodeIndex) {
            randNode = curr.val;
            i++;
            curr = curr.next;
        }
        return randNode;
    }

    public static void main(String[] args) {
        _382 rNode = new _382();

        rNode.insert(1);
        rNode.insert(2);
        rNode.insert(3);

        rNode.solution(rNode.head);
        System.out.println(rNode.getrandNodeom());
    }
}

// Definition for singly-linked list.
class _382Node {
     int val;
     _382Node next;
     _382Node() {}
     _382Node(int val) { this.val = val; }
     _382Node(int val, _382Node next) { this.val = val; this.next = next; }
 }

 /*
Given a singly linked list, return a random node's value from the linked list. 
Each node must have the same probability of being chosen.

Implement the Solution class:

    Solution(ListNode head) Initializes the object with the head of the singly-linked list head.
    int getRandom() Chooses a node randomly from the list and returns its value. 
    All the nodes of the list should be equally likely to be chosen.

 */
 