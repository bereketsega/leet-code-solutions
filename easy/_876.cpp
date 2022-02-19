#include <iostream>

using namespace std;
// Definition for singly-linked list.
struct _876Node {
    int val;
    _876Node *next;
    _876Node() : val(0), next(nullptr) {}
    _876Node(int x) : val(x), next(nullptr) {}
    _876Node(int x, _876Node *next) : val(x), next(next) {}
};

struct LinkedList {
    public:
        _876Node * head, * tail;
    public:
        LinkedList() {
        head = NULL;
        tail = NULL;
        }

        // helper function to insert node for testing
        void insert(int val) {
            _876Node * newNode = new _876Node(val);

            if (head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        _876Node* middleNode(_876Node* head) {
            int count = 0; // to count the number of nodes in the list
            // count nodes
            _876Node* curr = head;
            while (curr->next != NULL) {
                curr = curr->next;
                count++;
            }

            curr = head;

            // if the number of node is even traverse upto n/2
            if (count % 2 == 0){
                for (int i = 0; i < count/2; i++) {
                curr = curr->next;
                }
            } 
            // if the number of node is odd traverse upto (n/2) + 1    
            else {
                for (int i = 0; i <= count/2; i++) {
                curr = curr->next;
                }
            }
        return curr;
        }
};

int main() {
    LinkedList nums;
    
    // populate the list
    nums.insert(1);
    nums.insert(2);
    nums.insert(3);
    nums.insert(4);
    nums.insert(5);
    _876Node* res = nums.middleNode(nums.head);
    // display the right half nodes
    while (res != NULL) {
        cout << res->val << endl;
        res = res->next;
    }
    return 0;
}

/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
*/
