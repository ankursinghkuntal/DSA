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
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, 
            greater<pair<int, Node*>>>pq;
            
        for(int i = 0; i < arr.size(); i++){
            pq.push({arr[i]->data, arr[i]});
        }
        
        Node* head = NULL, *curr = NULL;
        
        while(!pq.empty()){
            Node*temp = pq.top().second;
            pq.pop();
                
            if(temp->next){
                pq.push({temp->next->data, temp->next});
            }
                
            if(head == NULL){
                
                head = temp;
                curr = temp;
                
            }
            
            else{
                
                curr -> next = temp;
                curr = temp;
                
            }
            
        }
        
        return head;
    }
};