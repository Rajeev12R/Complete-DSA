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

void insertatend(node* &head, int val){
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
void printlist(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
        insertatend(head, arr[i]);
    }
    int newEle;
    cin >> newEle;
    insertatend(head, newEle);

    printlist(head);


return 0;
}