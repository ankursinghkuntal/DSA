    
    // Given a Binary Tree with all unique values and two nodes value, n1 and n2. The task is to find the lowest common ancestor of the given two 
    // nodes. We may assume that either both n1 and n2 are present in the tree or none of them are present.

    // LCA: It is the first common ancestor of both the nodes n1 and n2 from bottom of tree
    
    
    // 1.

    bool findPath(Node* root, vector<Node*>& path, int n) {
        if (root == NULL) return false;
        path.push_back(root);
        if (root->data == n) return true;
        if (findPath(root->left, path, n) || findPath(root->right, path, n)) return true;
        path.pop_back();
        return false;
    }

    Node* lca(Node* root, int n1, int n2) {
        vector<Node*> path1, path2;
        if (!findPath(root, path1, n1) || !findPath(root, path2, n2)) return NULL;
        
        int i;
        for (i = 0; i < path1.size() && i < path2.size(); i++) {
            if (path1[i] != path2[i]) break;
        }
        
        return path1[i - 1];
    }






    // 2. Surity for the presence of both elements

    Node* lca(Node* root, int n1, int n2) {
        if(root == NULL) return NULL;
        if(root->data == n1 || root -> data == n2) return root;
        Node* left = lca(root->left, n1, n2);
        Node *right = lca(root->right, n1, n2);
        if(left != NULL && right != NULL) return root;
        if(left != NULL) return left;
        else return right;
    }