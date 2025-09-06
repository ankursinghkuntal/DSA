/* structure for a node
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head) {
    // code here
    cout << head -> data << " ";
    Node* curr = head -> next;
    
    while(curr != head){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    
}