/*
delete n nodes after m nodes
  The input list will have at least one element
  Node is defined as

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        // code here
        
        Node* prev = NULL;
        Node* curr = head;
        
        int skip = m, del = n;
        
        while(curr){
            
            m = skip, n = del;
            
            while(m-- && curr){
                prev = curr;
                curr = curr -> next;
            }
            
            while(n-- && curr){
                curr = curr->next;
            }
            prev -> next = curr;
            
        }            

        return head;
    }
};