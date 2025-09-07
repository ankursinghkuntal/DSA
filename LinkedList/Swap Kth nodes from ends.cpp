/*
class Node {
  public:
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
    Node* swapKth(Node* head, int k) {
        // code here
        int temp = k;
        
        Node* curr = head, *end = head;
        while(curr && temp--){
            curr = curr->next;
        }
        
        
        if(!curr && temp > 0) return head;
        
        
        while(curr){
            curr = curr->next;
            end = end->next;
        }
        
        
        
        k -= 1;
        Node* first = head;
        while(k--){
            first = first->next;
        }
        
        
        swap(end->data , first->data);
        
        return head;
    }
};