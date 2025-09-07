/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        set<int>s;
        
        Node* curr = head;
        
        Node* prev = NULL;
        while(curr){
            
            if(s.find(curr->data) != s.end()){
                prev -> next = curr -> next;
                curr = curr -> next;
            }
            
            else{
                if(curr) s.insert(curr->data);
                prev = curr;
                curr = curr -> next;
            }
            
        }
        
        return head;
    }
};