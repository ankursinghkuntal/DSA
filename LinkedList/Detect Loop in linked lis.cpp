/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        
        if(!head->next) return false;
        
        Node* fast = head->next->next;
        Node* slow = head->next;
        
        while(fast && fast->next){
            if(fast == slow) return true;
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return false;
    }
};