/* Structure for tree and linked list
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node()
        : data(0)
        , left(NULL)
        , right(NULL) {}

    Node(int x)
        : data(x)
        , left(NULL)
        , right(NULL) {}
};
 */

// This function should return head to the DLL
class Solution {
  public:
  
    
  
    Node* bToDLL(Node* root) {
        // code here
        
        Node* head = NULL;
        Node* curr1 = NULL;
        
        stack<Node*>st;
        Node* curr = root;
        
        while(curr || !st.empty()){
            while(curr){
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            
            if(head == NULL){
                head = new Node(curr->data);
                curr1 = head;
            }else{
                Node* temp = new Node(curr->data);
                curr1 -> right = temp;
                curr1 = temp;
            }
            
            curr = curr->right;
        }
        
        return head;
        
    }
};