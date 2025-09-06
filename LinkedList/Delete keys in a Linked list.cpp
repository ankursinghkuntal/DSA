/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node* head, int x) {
    // Your code here
    Node* curr = head, *prev = NULL;
    
    while(curr){
        
        if(!prev && curr && curr->data == x){
            head = head->next;
            delete(curr);
            curr = head;
        }
        else{
            prev = curr;
            curr = curr -> next;
            
            while(curr && curr->data == x){
                curr = curr -> next;
            }
            
            prev->next = curr;
        }
    }
    
    return head;
}