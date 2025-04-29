#include<iostream>
using namespace std;
struct Node {
    int info;
    Node* next;
};
Node* start = nullptr;
Node* current = nullptr;
void Create(int item) {
    Node* newnode = new Node;
    newnode->info = item;
    newnode->next = nullptr;

    if (start == nullptr) {
        start = newnode;
        current = newnode;
    }
    else {
        current->next = newnode;
        current = newnode;
    }
}

int countNodes(){
    current = start;
    int count = 0;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

int main(){
    Create(10);
    Create(20); 
    Create(30);
    Create(40);

    int totalNodes = countNodes();
    cout << "Total number of nodes in the linked list: " << totalNodes << endl;
    return 0;
}

/*
OUTPUT:
Total number of nodes in the linked list: 4
*/