v/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
  public:
  
    void randomSet(Node* head, Node* h1, unordered_map<Node*, Node*>& mp){
        
        Node* curr = head;
        Node* c1 = h1;
        
        while(curr){
            c1->random = mp[curr->random];
            curr = curr->next;
            c1 = c1->next;
        }
        
    }
    
    Node* copyList(Node* head, unordered_map<Node*, Node*>&mp){
        
        Node*h1 = NULL;
        Node* c1 = NULL;
        
        Node* curr = head;
        
        while(curr){
            if(h1 == NULL){
                h1 = new Node(curr->data);
                c1 = h1;
                mp[curr] = c1;
            }else{
                c1 -> next = new Node(curr->data);
                c1 = c1 -> next;
                mp[curr] = c1;
            }
            curr = curr->next;
        }
        
        return h1;
    }
    
    
    Node* cloneLinkedList(Node* head) {
        // code here
        
        unordered_map<Node*, Node*> mp;
        
        Node* h1 = copyList(head, mp);  // for copy the linked list
        
        randomSet(head, h1, mp);  // for setting up the random pointers
        
        return h1;
    }
};