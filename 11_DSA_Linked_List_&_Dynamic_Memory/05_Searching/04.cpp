#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

int main() {

    /*Node* node1 = new Node();
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

    Node* head = node1;*/

    Node* head = new Node{10};
    head->next = new Node{20};
    head->next->next = new Node{30};
    head->next->next->next = new Node{40};

    int target;
    cout << "Enter Target: ";
    cin >> target;

    Node* current = head;
    int index = 0;
    bool found = false;
    
    while(current != nullptr) {
        if(current->data == target) {
            cout << "Found " << target << " at index " << index << "\n"; 
            found = true;
            break;
        }
        current = current->next;
        index++;
    }

    if(!found) {
        cout << "Value " << target << " not found in the list.\n";
    }

    while(head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }    


    return 0;
}