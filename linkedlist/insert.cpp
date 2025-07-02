#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtBegin(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void insertAtPosition(Node* &head, int val, int pos) {
    Node* newNode = new Node(val);
    if (pos == 0 || head == NULL) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
}

// Print linked list
void printList(Node* head) {
    Node* temp = head;
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

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* head1 = NULL;
    for (int i = 0; i < n; i++) {
        insertAtBegin(head1, arr[i]);
    }
    int startval;
    cin >> startval;
    insertAtBegin(head1, startval);
    cout << "Linked List (insert at beginning): ";
    printList(head1);

    Node* head2 = NULL;
    for (int i = 0; i < n; i++) {
        insertAtEnd(head2, arr[i]);
    }
    int newele;
    cin >> newele;
    insertAtEnd(head2, newele);
    cout << "Linked List (insert at end): ";
    printList(head2);

    Node* head3 = NULL;
    for (int i = 0; i < n; i++) {
        insertAtEnd(head3, arr[i]);
    }

    int val, pos;
    cout << "Enter value and position to insert: ";
    cin >> val >> pos;

    insertAtPosition(head3, val, pos);
    cout << "Linked List (after inserting " << val << " at position " << pos << "): ";
    printList(head3);

    return 0;
}
