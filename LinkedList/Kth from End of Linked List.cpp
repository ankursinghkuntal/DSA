/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        
        Node* fast = head;
        Node* slow = head;
        
        while(k--  && fast){
            fast = fast -> next;
        }
        
        if(!fast && k >= 0) return -1;
        
        while(fast){
            fast = fast->next;
            slow = slow->next;
        }
        
        return slow -> data;
        
    }
};