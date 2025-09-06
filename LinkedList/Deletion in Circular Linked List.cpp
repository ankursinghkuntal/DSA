/*
class Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int key) {
        // code here
        if(head->next == head  && head->data == key) return NULL;
        
        Node* prev = head;
        Node* curr = head->next;
        
        while(curr->data != key  && curr != head){
            prev = curr;
            curr = curr->next;
        }
        
        if(curr == head && head -> data != key) return head;
        
        prev->next = curr -> next;
        
        if(head == curr) head = head->next;
        return head;
        
    }
};