#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

int main() {

    Node* head = new Node{10};
    head->next = new Node{20};
    head->next->next = new Node{30};
    head->next->next->next = new Node{8};
    head->next->next->next->next = new Node{8};

    Node* current = head;



    return 0;
}