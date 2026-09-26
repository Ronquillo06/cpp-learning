#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

int main() {

    Node node1;
    Node node2;

    node1.data = 10;
    node2.data = 20;

    node1.next = &node2;


    cout << "Node 1: " << node1.data << "\n";
    cout << "Node 2: " << node1.next->data << "\n";


    return 0;
}