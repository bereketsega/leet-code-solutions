#include <iostream>
#include <cmath>

using namespace std;

// Definition for singly-linked list.
struct _1290Node {
    int val;
    _1290Node *next;
    _1290Node() : val(0), next(nullptr) {}
    _1290Node(int x) : val(x), next(nullptr) {}
    _1290Node(int x, _1290Node *next) : val(x), next(next) {}
};

struct LinkedList {
    public:
        _1290Node * head, * tail;
    public:

        LinkedList() {
        head = NULL;
        tail = NULL;
        }

        // helper function to insert node for testing
        void insert(int val) {
            _1290Node * newNode = new _1290Node(val);

            if (head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        int getDecimalValue(_1290Node* head) {
            
            int res = 0;  // to store decimal value
            int element = 0; // to count elements in the list
            
            _1290Node * temp = head; // to traverse and count nodes

            // traverse through the list and count total nodes
            while(temp != NULL) {
                element++;
                temp = temp->next;
            }

            temp = head; // reset 

            int exp = element-1; // exponent of 2 to convert to decimal

            // loop through each node 
            for (int i = 1; i <= element; i++) {
                // add 2 ^(exp) * (1)  to result 
                res+= ((temp->val)*pow(2,exp));
                temp = temp->next;
                exp--;
            }

            return res;
        }

};

int main() {

    LinkedList nums;
    
    // populate the list
    nums.insert(1);
    nums.insert(0);
    nums.insert(1);

    cout << nums.getDecimalValue(nums.head) << endl;

    return 0;
}

/*
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. 
The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.
*/
