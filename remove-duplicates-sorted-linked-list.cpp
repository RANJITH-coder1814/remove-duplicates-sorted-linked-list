// Remove Duplicates from Sorted Linked List

#include <iostream>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* removeDuplicates(Node* head) {
        if (!head) return head;

        Node* curr = head;

        while (curr && curr->next) {
            if (curr->data == curr->next->data) {
                // Skip duplicate node
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};

// Helper function to print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Driver Code
int main() {
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(8);

    Solution obj;
    head = obj.removeDuplicates(head);

    printList(head);

    return 0;
}
