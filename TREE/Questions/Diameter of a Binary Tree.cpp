    // // 1.  T.C. = O(N2)
    
    int height(Node *root){
        if(!root) return 0;
        return max(height(root->left), height(root->right))+1;
    }
    int diameter(Node* root) {
        if(!root) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        int d1 = lh + rh + 1;
        int d2 = diameter(root->left);
        int d3 = diameter(root->right);
        return max(d1,max(d2,d3));
    }





    // 2.  T.C. = O(N)
    
    int height(Node* root, int &dia){
        if(root == NULL) return 0;
        int lh = height(root->left, dia);
        int rh = height(root->right, dia);
        dia = max(dia,lh+rh+1);
        return 1 + max(lh,rh);
    }
    
    int diameter(Node* root) {
        int dia = 0;
        height(root, dia);
        return dia;
    }
