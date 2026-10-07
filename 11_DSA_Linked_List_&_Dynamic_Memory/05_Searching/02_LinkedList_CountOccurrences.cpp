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
    int occurances = 0;
    bool appears = false;
    int target;

    cout << "Enter Target:";
    cin >> target;


    while(current != nullptr) {
        if(current->data == target) {
            
        }
    }




    return 0;
}