#include <iostream>
#include <vector>
using namespace std;
// namespace std;

// Definition for a doubly-linked list node.
class node {
    public:
    int val;
    node* next;
    node* prev;

    node(int x) 
    {
        val=x;
        next=NULL;
        prev=NULL;
    }
};

// Function to check if a doubly linked list is a palindrome
bool isPalindrome(node* head) {
    // Count the number of nodes and store elements in a vector
    int length = 0;
     vector<int> elements;
    
    node* current = head;
    while (current != nullptr) {
        elements.push_back(current->val);
        current = current->next;
        length++;
    }
    
    // Compare elements to check for palindrome
    for (int i = 0; i < length / 2; i++) {
        if (elements[i] != elements[length - i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Create a sample doubly linked list
    node* head = new node(1);
    head->next = new node(2);
    head->next->prev = head;
    head->next->next = new node(2);
    head->next->next->prev = head->next;
    head->next->next->next = new node(1);
    head->next->next->next->prev = head->next->next;

    bool result = isPalindrome(head);
    
    if (result) {
        cout << "The doubly linked list is a palindrome." << endl;
    } else {
        cout << "The doubly linked list is not a palindrome." << endl;
    }

    // Clean up memory (deallocate nodes)
    while (head != nullptr) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
