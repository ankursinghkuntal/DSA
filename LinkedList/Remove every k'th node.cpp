/* Link list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        
        if(k == 1) return NULL;
        
        Node* curr = head;
        
        Node* prev = NULL;
        
        while(curr){
            
            int temp = k-1;
            
            while(temp-- && curr){
                prev = curr;
                curr = curr -> next;
            }
        
            if(prev && curr) prev->next = curr ->next;
            
            if(curr) curr = curr -> next;
            
        }
        
        return head;
        
    }
};