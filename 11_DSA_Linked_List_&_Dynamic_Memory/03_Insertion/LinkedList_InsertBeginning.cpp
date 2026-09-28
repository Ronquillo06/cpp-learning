#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next = nullptr;

};

int main() {
    
    Node* node1 = new Node(); 
    Node* node2 = new Node();
    Node* node3 = new Node();
    
    Node* head = node1;
    Node* newNode = new Node();
    newNode->data = 5;

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    newNode->next = node1;
    head = newNode;
    node1->next = node2;
    node2->next = node3;

    Node* current = head;

    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    delete newNode;
    delete node1;
    delete node2;
    delete node3;

/* option2:

    #include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a node at the beginning

void insertAtBeginning(Node*& head, int newValue) {
    // 1. Create the new node
    Node* newNode = new Node(newValue);
    
    // 2. Make new node point to the current head
    newNode->next = head;
    
    // 3. Move head to point to the new node
    head = newNode;
}

// Helper function to print the list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n";
}

int main() {
    // Building original list: 10 -> 20 -> 30 -> nullptr
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    std::cout << "Before insertion: ";
    printList(head);

    // Insert 5 at the beginning
    insertAtBeginning(head, 5);

    std::cout << "After insertion:  ";
    printList(head);

    return 0;
}

   */

    return 0;
}