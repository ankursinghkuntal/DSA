/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, 
                greater<pair<int, Node*>>>pq;
        
        Node* curr = root;
        
        while(curr){
            pq.push({curr->data, curr});
            curr = curr->next;
        }
        
        Node* head = NULL, *curr1 = NULL;
        
        while(!pq.empty()){
            Node*temp = pq.top().second;
            pq.pop();
            
            if(temp->bottom){
                pq.push({temp->bottom->data, temp->bottom});
            }
            
            if(!head){
                head = temp;
                curr1 = head;
            }else{
                curr1->bottom = temp;
                curr1 = temp;
            }
        }
        
        return head;
    }
};