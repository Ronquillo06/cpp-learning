#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

int main() {

    Node* head = new Node{15};
    head->next = new Node{8};
    head->next->next = new Node{8};
    head->next->next->next = new Node{8};
    head->next->next->next->next = new Node{8};


    return 0;
}