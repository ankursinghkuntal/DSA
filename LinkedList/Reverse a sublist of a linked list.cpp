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
  
    Node* reverse(Node* head){
        Node* t1 = NULL, *t2 = NULL, *curr = head;
        
        while(curr){
            t1 = curr;
            curr = curr->next;
            t1 -> next = t2;
            t2 = t1;
        }
        
        return t1;
    }
  
    Node* reverseBetween(int a, int b, Node* head) {
        // code here
        
        Node* st2 = NULL, *st1 = head;
        
        a = a-1;
        while(a--){
            st2 = st1;
            st1 = st1->next;
        }
        
        
        Node* end2 = head, *end1 = NULL;
        while(b--){
            end1 = end2;
            end2 = end2 -> next;
        }
        end1 -> next = NULL;
        
        Node* r1 = reverse(st1);
        
        if(st2) st2->next = r1;
        else head = r1;
        
        st1->next = end2;
        
        

        return head;
        
    }
};