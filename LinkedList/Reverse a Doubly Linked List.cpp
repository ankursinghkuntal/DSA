/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        
        Node* t1 = NULL;
        Node* t2 = NULL;
        Node* curr = head;
        
        while(curr){
            t1 = curr;
            curr = curr -> next;
            t1->next = t2;
            if(t2) t2 -> prev = t1;
            t2 = t1;
        }
        
        return t1;
    }
};