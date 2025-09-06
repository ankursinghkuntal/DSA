/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        
        Node* curr = head->next;
        
        Node* temp = head;
        
        while(curr){
            if(curr->data != temp->data){ 
                temp->next = curr;
                temp = curr;
            }
            curr = curr->next;
        }
        
        temp -> next = NULL;
        
        return head;
    }
};