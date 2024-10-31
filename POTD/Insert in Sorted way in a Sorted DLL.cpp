// class Solution {
// public:
//     Node* sortedInsert(Node* head, int x) {
//         Node* newNode = new Node();
//         newNode->data = x;
//         newNode->next = NULL;
//         newNode->prev = NULL;
        
//         Node* temp = head;

//         if (!head) {
//             return newNode;
//         }
        
//         if (temp->data >= x) {
//             newNode->next = head;
//             head->prev = newNode;
//             return newNode;
//         }
        
//         while (temp->next && temp->next->data < x) {
//             temp = temp->next;
//         }
        
//         newNode->next = temp->next;
//         if (temp->next) {
//             temp->next->prev = newNode;
//         }
        
//         temp->next = newNode;
//         newNode->prev = temp;

//         return head;
//     }
// };