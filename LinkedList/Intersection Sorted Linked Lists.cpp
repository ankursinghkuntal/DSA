/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* head = NULL;
        Node* curr = NULL;
        
        Node* curr1 = head1, *curr2 = head2;
        
        while(curr1 && curr2){
            
            if(curr1->data == curr2->data){
                
                if(head == NULL){
                    head = new Node(curr1->data);
                    curr = head;
                }else{
                    Node* temp = new Node(curr1->data);
                    curr -> next = temp;
                    curr = temp;
                }
                
                curr1 = curr1 -> next;
                curr2 = curr2 -> next;
                
            }else if(curr1->data < curr2->data){
                curr1 = curr1->next;
            }else{
                curr2 = curr2->next;
            }
            
        }
        
        return head;
    }
};