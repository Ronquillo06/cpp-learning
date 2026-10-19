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
    head->next->next->next = new Node{20};
    head->next->next->next->next = new Node{40};
    head->next->next->next->next->next = new Node{20};

    Node* current = head;

    int target;
    cout << "Enter Target:";
    cin >> target;
    int firstOccu = -1;
    int lastOccu = -1;
    int total = 0;
    bool found = false;

    while(current != nullptr) {
        if(current->data == target) {
            firstOccu = current->data;
            found = true;
            break;
        }

        if(found) {
            continue;
        }

        if(current->data == target) {
            lastOccu = current->data;
        }
        current = current->next;

    }



    while(head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }




    return 0;
}