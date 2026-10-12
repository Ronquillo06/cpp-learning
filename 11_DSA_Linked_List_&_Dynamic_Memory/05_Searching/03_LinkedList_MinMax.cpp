#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

int main() {

    Node* head = new Node{15};
    head->next = new Node{8};
    head->next->next = new Node{42};
    head->next->next->next = new Node{3};
    head->next->next->next->next = new Node{27};
    head->next->next->next->next->next = new Node{11};

    Node* current = head;
    int max = head->data;
    int min = head->data;

    while(current != nullptr) {
        if (current->data > max) {
            max = current->data;
        }
    }


    while(head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}