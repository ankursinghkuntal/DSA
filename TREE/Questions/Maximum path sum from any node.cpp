    int MaxPathSum(Node* root, int &mx){
        if(root == NULL) return 0;
        int left = max(0,MaxPathSum(root->left,mx));
        int right = max(0,MaxPathSum(root->right,mx));
        mx = max(mx, left + right + root->data);
        return max(left,right)+root->data;
    }
    
    int findMaxSum(Node* root)
    {
        int mx = INT_MIN;
        MaxPathSum(root, mx);
        return mx;
    }