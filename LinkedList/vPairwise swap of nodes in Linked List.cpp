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
    Node *pairwiseSwap(Node *head) {
        // code here
        Node* curr = head;
        
        while(curr && curr -> next){
            swap(curr->data , curr->next->data);
            
            curr = curr -> next -> next;
        }
        
        return head;
    }
};