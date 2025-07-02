#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertatend(node* &head, int val) {
    node* newE = new node(val);
    if (head == NULL) {
        head = newE;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newE;
}

void deletenode(node* &head, int val) {
    if (head == NULL) return;

    // If head itself holds the value
    if (head->data == val) {
        node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    node* temp = head;
    while (temp->next != NULL && temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        cout << "Value not found in the list." << endl;
        return;
    }

    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void printlist(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    node* head = NULL;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertatend(head, val);
    }

    cout << "Linked List: ";
    printlist(head);

    cout << "Enter value to delete: ";
    int valToDelete;
    cin >> valToDelete;
    deletenode(head, valToDelete);

    cout << "After deletion: ";
    printlist(head);

    return 0;
}
