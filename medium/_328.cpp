#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct _328Node {
    int val;
    _328Node *next;
    _328Node() : val(0), next(nullptr) {}
    _328Node(int x) : val(x), next(nullptr) {}
    _328Node(int x, _328Node *next) : val(x), next(next) {}
};

struct LinkedList {
    public:
        _328Node *head, *tail;
    public:
        LinkedList() {
        head = NULL;
        tail = NULL;
        }

        // helper function to insert node for testing
        void insert(int val) {
            _328Node *newNode = new _328Node(val);

            if (head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        _328Node *oddEvenList(_328Node* head) {
            // empty list
            if (head == NULL) {
                return NULL;
            }

            _328Node *curr = head; // to traverse first group
            _328Node *sec = head->next; // to traverse second group

            while (curr->next != NULL) {
                // done traversing
                if (curr->next->next == NULL) {
                    break;
                }

                _328Node* next = curr->next; // adjacent node
                curr->next = next->next; // skip adjacent and set next
                next->next = curr->next->next; // skip adjacent and set next
                curr =  curr->next; // next step
            }
            curr->next = sec; // combine the two groups

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
    nums.insert(5);
    nums.insert(6);
    nums.insert(7);

    _328Node *res = nums.oddEvenList(nums.head);
    // display nodes without mid
    while (res != NULL) {
        cout << res->val << endl;
        res = res->next;
    }

    return 0;
}

/*
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.
*/
