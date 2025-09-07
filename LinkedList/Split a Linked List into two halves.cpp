/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        Node* curr = head;
        int cnt = 0;
        
        while(curr){
            cnt += 1;
            curr = curr->next;
            if(curr == head) break; 
        }
        
        Node* head1 = head, *head2 = head;
        
        int temp = (cnt-1)/2;
        
        Node* curr1 = head;
        
        while(temp--){
            curr1 = curr1->next;
        }
        
        head2 = curr1->next;
        
        curr1->next = head1;  // first circular list created
        
        
        Node* curr2 = head2;
        
        while(curr2->next != head){
            curr2 = curr2->next;
        }
        
        curr2 ->next = head2;  // second circular list created
        
        return {head1, head2};
        
    }
};