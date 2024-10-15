    // ===================================================== O(N2)===========================================================
    
    // int height(Node *root){
    //     if(root == NULL) return 0;
        
    //     int lh = height(root -> left);
    //     int rh = height(root -> right);
    //     return max(lh, rh) + 1;
    // }
    
    // bool isBalanced(Node *root)
    // {
    //     if(root == NULL) return true;
    //     return (abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right));
    // }


    // =============================================O(N)====================================================================

    // int height(Node *root){
    //     if(root == NULL) return 0;
        
    //     int lh = height(root -> left);
    //     if(lh == -1) return -1;
    //     int rh = height(root -> right);
    //     if(rh == -1) return -1;
    //     if(abs(lh - rh) > 1) return -1;
    //     else return max(lh, rh) + 1;
        
    // }
    
    // bool isBalanced(Node *root)
    // {
    //     if(root == NULL) return true;
    //     return height(root) != -1;
    // }