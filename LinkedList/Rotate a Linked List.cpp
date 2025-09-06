/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        
        
        Node* curr = head;
        
        int size = 1;
        while(curr->next){
            curr = curr -> next;
            size++;
        }
        
        
        k %= size;
        
        if(k == 0) return head;
        
        curr -> next = head;  // to make the list as circular
        
        curr = head;
        Node* prev = NULL;
        
        while(k--){
            prev = curr;
            curr = curr->next;
        }
        
        prev -> next = NULL;
        
        return curr;
        
    }
};