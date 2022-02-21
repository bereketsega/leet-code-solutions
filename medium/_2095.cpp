#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct _2095Node {
    int val;
    _2095Node *next;
    _2095Node() : val(0), next(nullptr) {}
    _2095Node(int x) : val(x), next(nullptr) {}
    _2095Node(int x, _2095Node *next) : val(x), next(next) {}
};

struct LinkedList {
    public:
        _2095Node *head, *tail;
    public:
        LinkedList() {
        head = NULL;
        tail = NULL;
        }

        // helper function to insert node for testing
        void insert(int val) {
            _2095Node *newNode = new _2095Node(val);

            if (head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        _2095Node *deleteMiddle(_2095Node* head) {
            // if list has only one element return null
            if (head->next == NULL) {
                return NULL;
            }
            _2095Node *curr = head; // to traverse
            int count = 0; // count number of nodes in the list
            while (curr != NULL) {
                count++;
                curr =  curr->next;
            }
            curr = head; // reset
            int mid = count/2; // middle node index
            // traverse upto mid
            for (int i = 1; i < mid; i++) {
                curr = curr->next;
            }
            // point to the next element of mid
            curr->next = curr->next->next;

            return head;
        }
};

int main() {
    LinkedList nums;
    
    // populate the list
    nums.insert(1);
    nums.insert(2);
    nums.insert(3);
    nums.insert(4);

    _2095Node *res = nums.deleteMiddle(nums.head);
    // display nodes without mid
    while (res != NULL) {
        cout << res->val << endl;
        res = res->next;
    }

    return 0;
}

/*
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

    For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
*/
