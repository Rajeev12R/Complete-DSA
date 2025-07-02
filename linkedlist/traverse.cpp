#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertelement(node* &head, int val){
    node* newE = new node(val);
    if(head == NULL){
        head = newE;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newE;
}

void traverse(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main(){
    int n;
    cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }

    node* head = NULL;
    for(int i = 0; i < n; i++){
        insertelement(head, arr[i]);
    }

    cout << "Linked List: ";
    traverse(head);
return 0;
}