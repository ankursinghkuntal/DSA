/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node* curr = head;
        Node* newHead = NULL;
        Node* tail = NULL;
        
        while(curr){
            Node* groupedHead = curr;
            Node* t1 = NULL;
            Node* t2 = NULL;
            int cnt = 0;
            
            while(curr){
                t1 = curr;
                curr = curr -> next;
                t1->next = t2;
                t2 = t1;
                cnt+=1;
                if(cnt == k) break;
            }
            
            if(!newHead) newHead = t1;
            if(tail) tail->next = t1;
            tail = groupedHead;
            
        }
        
        return newHead;
    }
};