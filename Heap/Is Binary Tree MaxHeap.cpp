// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    
    bool isComplete(Node* tree){
        
        vector<int>level;
        
        queue<Node*>q;
        q.push(tree);
        
        while(!q.empty()){
            
            Node* temp = q.front();
            q.pop();
            
            if(temp == NULL){
                level.push_back(-1);
                continue;
            }else{
                level.push_back(temp->data);
            }
            
            q.push(temp->left);
            q.push(temp->right);
            
        }
        
        for(int i = 0; i < level.size()-1; i++){
            if(level[i] == -1 && level[i+1] != -1) return false;
        }
        return true;
    }
    
    
    
    bool checkForHeap(Node* root) {
        if (!root) return true;
        
        if (root->left && root->left->data > root->data) return false;
        if (root->right && root->right->data > root->data) return false;
        
        return checkForHeap(root->left) && checkForHeap(root->right);
    }
    
    
    
    bool isHeap(Node* tree) {
        // code here
        
        if(!isComplete(tree)) return false;
        
        return checkForHeap(tree);
        
    }
};