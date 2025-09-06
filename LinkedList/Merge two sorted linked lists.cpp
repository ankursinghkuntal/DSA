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
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* curr1 = head1, *curr2 = head2;
        
        Node* curr = NULL;
        
        while(curr1 && curr2){
            
            if(curr1->data <= curr2->data){
                Node*temp = curr1;
                
                if(!curr){
                    curr = temp;
                }else{
                    curr->next = temp;
                    curr = temp;
                }
                
                curr1 = curr1->next;
                
            }else{
                Node* temp = curr2;
                
                if(!curr){
                    curr = temp;
                }else{
                    curr->next = temp;
                    curr = temp;
                }
                
                curr2 = curr2 -> next;
                
            }
            
        }
        
        if(curr1) curr -> next = curr1;
        else curr -> next = curr2;
        
        if(head1->data <= head2->data) return head1;
        return head2;
        
    }
};