/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    Node* reverse(Node* head){
        Node* t1 = NULL, *t2 = NULL, *curr = head;
        
        while(curr){
            t1 = curr;
            curr = curr -> next;
            t1 -> next = t2;
            t2 = t1;
        }
        
        return t1;
    }
  
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        
        Node* h1 = reverse(head1);
        Node* h2 = reverse(head2);
        
        Node* c1 = h1, *c2 = h2;
        
        int sum = 0, carry = 0;
        
        
        Node* head = NULL;
        Node* curr = NULL;
        
        
        while(c1 && c2){
            
            sum = carry + c1->data + c2->data;
            
            carry = sum/10;
            sum = sum%10;
            
            if(head == NULL){
                head = new Node(sum);
                curr = head;
            }else{
                Node* temp = new Node(sum);
                curr ->next = temp;
                curr = temp;
            }
            
            c1 = c1->next;
            c2 = c2->next;
            
        }
        
        while(c1){
            sum = carry + c1->data;
            
            carry = sum/10;
            sum = sum%10;
            
            if(head == NULL){
                head = new Node(sum);
                curr = head;
            }else{
                Node* temp = new Node(sum);
                curr ->next = temp;
                curr = temp;
            }           
            
            c1 = c1->next;
        }
        
        while(c2){
            sum = carry + c2->data;
            
            carry = sum/10;
            sum = sum%10;
            
            if(head == NULL){
                head = new Node(sum);
                curr = head;
            }else{
                Node* temp = new Node(sum);
                curr ->next = temp;
                curr = temp;
            }           
            
            c2 = c2->next;
        }
        
        if(carry > 0){
            Node* temp = new Node(carry);
            curr -> next = temp;
            curr = temp;
        }
        
        head = reverse(head);
        
        while(head && head->data == 0){
            head = head -> next;
        }
        
        return head;
    }
};