/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        
        Node* slow = head, *fast = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow -> next;
            if(slow == fast) break;
        }
        
        if(!fast || !fast->next) return;
        
        
        
        fast = head;
        
        while(fast != slow){
            slow = slow->next;
            fast = fast->next;
        }
        
        while(fast->next != slow){
            fast = fast -> next;
        }
        
        fast -> next = NULL;
    }
};