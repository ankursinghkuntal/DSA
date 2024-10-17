// Max Width 




    // int getMaxWidth(Node* root) {
    //     int maxWidth = 0;
    //     if(root == NULL) return 0;
        
    //     queue<Node*>q;
    //     q.push(root);
    //     while(!q.empty()){
            
    //         int size = q.size();
    //         maxWidth = max(maxWidth, size);
            
    //         while(size--){
                
    //             Node*temp = q.front();
    //             q.pop();
                
    //             if(temp->left != NULL) q.push(temp->left);
    //             if(temp->right != NULL) q.push(temp->right);
            
    //         }
            
    //     }
    //     return maxWidth;
    // }