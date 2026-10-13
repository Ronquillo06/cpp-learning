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
    int largest = current->data;
    int secLargest;

    





    return 0;
}