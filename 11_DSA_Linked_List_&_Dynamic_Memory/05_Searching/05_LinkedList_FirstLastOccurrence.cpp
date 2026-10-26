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
    int currentIndex = 0;

    while(current != nullptr) {
        if(current->data == target) {
            if(firstOccu == -1) {
                firstOccu = currentIndex;
            }
            
            lastOccu = currentIndex;
            total++;
        
        }
        
        currentIndex++;
        current = current->next;
    }

    if (total == 0) {
        cout << "Target " << target << " not found in the linked list.\n";
    } else {
        cout << "First Occurrence: Index " << firstOccu << "\n"; 
        cout << "Last Occurrence: Index " << lastOccu << "\n"; 
        cout << "Total Occurrences: " << total << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
    }



    while(head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }




    return 0;
}