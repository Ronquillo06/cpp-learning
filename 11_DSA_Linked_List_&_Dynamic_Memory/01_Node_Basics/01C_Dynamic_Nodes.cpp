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

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;

    cout << node1->data << " " << node1->next->data << " " << node1->next->next->data << "\n";

    delete node1;
    delete node2;
    delete node3;

    return 0;
}