/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        
        int cntNOT2 = 0;
        
        Node* curr = head;
        while(curr){
            if(curr->data != 2) cntNOT2++;
            curr = curr->next;
        }
        
        
        Node* left = head, *mid = head, *right = head;
        
        while(cntNOT2--) right = right -> next;
        
        
        
        curr = right;  // store first index of the 2
        
        while(mid != curr){
            
            if(mid->data == 0){
                swap(left->data, mid->data);
                left = left->next;
                mid = mid->next;
            }else if(mid->data == 2){
                swap(mid->data, right->data);
                right = right->next;
            }else{
                mid = mid -> next;
            }
            
        }
        
        
        return head;
    }
};