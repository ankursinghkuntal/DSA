// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/
class Solution {
  public:
    struct Node* partition(struct Node* head, int x) {
        // code here
        int cntSmall = 0;
        
        Node* curr = head;
        
        Node* low = new Node(0), *mid = new Node(0), *high = new Node(0);
        Node* lowCurr = low, *midCurr = mid, *highCurr = high;
        
        while(curr){
            
            if(curr->data < x){
                
                    Node*temp = new Node(curr->data);
                    lowCurr -> next = temp;
                    lowCurr = temp;
                
            }else if(curr->data == x){
                
                    Node*temp = new Node(curr->data);
                    midCurr -> next = temp;
                    midCurr = temp;
                
            }else{
                

                    Node*temp = new Node(curr->data);
                    highCurr -> next = temp;
                    highCurr = temp;
                
            }
            
            curr = curr->next;
            
        }
        
        highCurr = NULL;
        midCurr -> next = high -> next;
        lowCurr->next = mid -> next;
        
        return low->next;
    }
};