/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* fast = head;
        Node* slow = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow->data;
    }
};