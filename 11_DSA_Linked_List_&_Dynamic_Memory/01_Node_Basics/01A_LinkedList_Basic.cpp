#include <iostream>

using namespace std;

struct Node {
    int data = 10;
    Node* next = nullptr;
};

int main() {

    Node node;

    cout << "Data: " << node.data << "\n";

    if (node.next == nullptr) {
        cout << "Next: nullptr\n";
    } else {
        cout << "Next: points to another node\n";
    }

    return 0;
}