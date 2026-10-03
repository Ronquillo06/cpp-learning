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

    int position;
    cout << "Enter Position:";
    cin >> position;
    
    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        Node* current = head;
        for(int i = 0; i < position - 1 && current != nullptr; i++) {
            current = current->next;
        }

        if(current != nullptr && current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";

    while(head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}