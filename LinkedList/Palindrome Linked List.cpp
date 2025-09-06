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
  
    Node* reverse(Node* head){
        Node* t1 = NULL;
        Node* t2 = NULL;
        Node* curr = head;
        
        while(curr){
            t1 = curr;
            curr = curr -> next;
            t1->next = t2;
            t2 = t1;
        }
        
        return t1;
    }
    
    Node* findMid(Node* head){
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) break;
        }
        
        return slow;
    }
    
    bool isPalindrome(Node *head) {
        //  code here
        
        // 1.
        
        stack<Node*>st;
        Node* curr = head;
        
        while(curr){
            st.push(curr);
            curr = curr->next;
        }
        
        curr = head;
        
        while(!st.empty()){
            if(curr->data != st.top()->data) return false;
            st.pop();
            curr = curr->next;
        }
        
        return true;
        
        
        // 2.
        
        Node* mid = findMid(head);
        Node* right = reverse(mid);
        
        Node* curr = head;
        
        while(curr != mid){
            if(curr->data != right->data){
                return false;
            }
            curr = curr -> next;
            right = right->next;
        }
        
        return true;
    }
};