/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
  
    Node* findMid(Node* root){
        
        Node* slow = root, *fast = root->next;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    Node* merge(Node* h1, Node* h2){
        
        Node*head = NULL;
        Node* curr = NULL;
        
        Node*c1 = h1, *c2 = h2;
        
        while(c1 && c2){
            
            if(c1->data <= c2->data){
                
                if(curr == NULL){
                    head = c1;
                    curr = head;
                }else{
                    curr->next = c1;
                }
                
                curr = c1;
                c1 = c1->next;
                
            }else{
                
                if(curr == NULL){
                    head = c2;
                    curr = head;
                }else{
                    curr->next = c2;
                }
                
                curr = c2;
                c2 = c2->next;
                
            }
            
        }
        
        if(c2) curr->next = c2;
        else curr->next = c1;
        
        return head;
        
    }
  
    Node* mergeSort(struct Node* head_ref) {
        // code here
        if(!head_ref || !head_ref->next) return head_ref;
        
        Node*mid = findMid(head_ref);
        Node* leftHead = head_ref;
        Node*rightHead = mid->next;
        mid->next = NULL;
        
        leftHead = mergeSort(leftHead);
        rightHead = mergeSort(rightHead);
        
        return merge(leftHead,rightHead);
        
    }
};