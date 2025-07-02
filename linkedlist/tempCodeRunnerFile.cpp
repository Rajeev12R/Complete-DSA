void deleteLast(Node* &head) {
//     if (head == NULL) {
//         cout << "List is already empty." << endl;
//         return;
//     }

//     // If there's only one node
//     if (head->next == NULL) {
//         delete head;
//         head = NULL;
//         return;
//     }

//     // Traverse to second last node
//     Node* temp = head;
//     while (temp->next->next != NULL) {
//         temp = temp->next;
//     }

//     delete temp->next;
//     temp->next = NULL;
// }