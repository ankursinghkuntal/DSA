/*
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *rotateDLL(Node *head, int p) {

        // code here..
        
        Node* curr = head;
        
        int size = 1;
        while(curr->next){
            size++;
            curr = curr -> next;
        }
        
        p = p%size;
        
        if(p == 0) return head;
        
        curr -> next = head;
        
        Node* prev = NULL;
        
        curr = head;
        
        while(p--){
            prev = curr;
            curr = curr->next;
        }
        
        prev -> next = NULL;
        return curr;
        
    }
};