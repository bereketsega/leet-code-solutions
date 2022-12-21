#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct _2181Node {
    int val;
    _2181Node *next;
    _2181Node() : val(0), next(nullptr) {}
    _2181Node(int x) : val(x), next(nullptr) {}
    _2181Node(int x, _2181Node *next) : val(x), next(next) {}
};

struct LinkedList {
    public:
        _2181Node *head, *tail;
    public:
        LinkedList() {
        head = NULL;
        tail = NULL;
        }
                // helper function to insert node for testing
        void insert(int val) {
            _2181Node *newNode = new _2181Node(val);

            if (head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        _2181Node *mergeNodes(_2181Node *head) {
            _2181Node *traverse = head->next;
            _2181Node *res = NULL;
            _2181Node *resTraverse;
            int sum = 0;
            while (traverse != NULL) {
                if (traverse->val != 0) {
                    sum+=traverse->val;
                } else if (res == NULL) {
                    res = new _2181Node(sum);
                    resTraverse = res;
                    sum=0;
                } else {
                    resTraverse->next = new _2181Node(sum);
                    resTraverse = resTraverse->next;
                    sum=0;
                }

                traverse = traverse->next;
            }
            return res;
        }
};


int main() {
    LinkedList nums;
    
    // populate the list
    nums.insert(0);
    nums.insert(1);
    nums.insert(0);
    nums.insert(3);
    nums.insert(0);
    nums.insert(2);
    nums.insert(2);
    nums.insert(0);

    _2181Node *res = nums.mergeNodes(nums.head);
    // display nodes without mid
    while (res != NULL) {
        cout << res->val << endl;
        res = res->next;
    }

    return 0;
}

// You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

// For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.

// Return the head of the modified linked list.
