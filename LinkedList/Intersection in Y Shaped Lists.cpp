/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        
        // 1.
        
        unordered_set<Node*>s;
        
        Node* curr1 = head1, *curr2 = head2;
        
        while(curr1){
            s.insert(curr1);
            curr1 = curr1->next;
        }
        
        while(curr2){
            if(s.find(curr2) != s.end()){
                return curr2;
            }
            curr2 = curr2->next;
        }
        
        
        
        // 2.
        
        int size1 = 0, size2 = 0;
        Node* curr1 = head1, *curr2 = head2;
        
        while(curr1){
            size1++;
            curr1 = curr1->next;
        }
        
        while(curr2){
            size2++;
            curr2 = curr2->next;
        }
        
        int temp = abs(size1-size2);
        
        if(size1 >= size2){
            
            curr1 = head1;
            curr2 = head2;
            
            while(temp--){
                curr1 = curr1->next;
            }
            
            while(curr2 != curr1){
                curr2 = curr2 -> next;
                curr1 = curr1 -> next;
            }
            
            return curr1;
            
        }else{
            
            curr1 = head1;
            curr2 = head2;
            
            while(temp--){
                curr2 = curr2->next;
            }
            
            while(curr2 != curr1){
                curr2 = curr2 -> next;
                curr1 = curr1 -> next;
            }
            
            return curr1;
            
        }
        
    }
};