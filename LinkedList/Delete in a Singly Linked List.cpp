/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        Node* prev = NULL, *curr = head;
        
        x = x-1;
        
        while(curr && x--){
            prev = curr;
            curr = curr->next;
        }
        
        if(prev == NULL){
            return head->next;
        }
        
        prev -> next = curr -> next;
        
        return head;
        
    }
};