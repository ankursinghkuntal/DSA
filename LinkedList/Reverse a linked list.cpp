/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* t1 = NULL;
        Node* t2 = NULL;
        Node* curr = head;
        
        while(curr){
            t1 = curr;
            curr = curr->next;
            t1 -> next = t2;
            t2 = t1;
        }
        
        return t1;
    }
};