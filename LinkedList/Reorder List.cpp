/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
  
   Node* findMid(Node*head){
       Node* slow = head, *fast = head;
       
       while(fast && fast->next){
           slow = slow->next;
           fast = fast -> next -> next;
       }
       return slow;
    }
    
    Node* reverse(Node* head){
        Node*t1 = NULL, *t2 = NULL, *curr = head;
        
        while(curr){
            t1 = curr;
            curr = curr -> next;
            t1 -> next = t2;
            t2 = t1;
        }
        
        return t1;
    }
    
    void merge(Node* h1, Node* h2){
        
        Node* c1 = h1 -> next, *c2 = h2;
        
        Node* curr = h1;
        
        while(c1 && c2){
            
            curr -> next = c2;
            curr = c2;
            
            c2 = c2->next;
            
            curr->next = c1;
            curr = c1;
            
            c1 = c1->next;
        }
        
        if(c2) curr -> next = c2;
        
    }
    
    void reorderList(Node* head) {
        // Your code here
        Node* mid = findMid(head);
        
        // for implement the logic we need the node next to mid
        // so, in the reverse we pass mid->next node
        
        Node* rev = reverse(mid->next);
        mid -> next = NULL;
        
        merge(head, rev);
    }
};