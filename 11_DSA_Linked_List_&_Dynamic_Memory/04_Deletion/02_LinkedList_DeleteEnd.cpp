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
    Node* node4 = new Node();

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;
    node4->data = 40;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;

    Node* current = head;
    while (current->next != nullptr && current->next->next != nullptr) {
        current = current->next;
    }

    Node* temp = current->next;
    current->next = nullptr;
    delete temp;

    current = head;

    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";

    delete node1;
    delete node2;
    delete node3;
    delete node4;


    return 0;
}