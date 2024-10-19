    
    // 1. O(N)

    // void NumNode(Node* root, int& cnt) {
    //     if (root == NULL) return;
        
    //     if (root->left) {
    //         cnt++;
    //         NumNode(root->left, cnt);
    //     }
        
    //     if (root->right) {
    //         cnt++;
    //         NumNode(root->right, cnt);
    //     }
    // }
  
    // int countNodes(Node* root) {
    //     if (root == NULL) return 0;
        
    //     int cnt = 1;
    //     NumNode(root, cnt);
        
    //     return cnt;
    // }



    // 2.O(N)

    // int countNodes(Node* root) {
    //     if (root == NULL) return 0;
        
    //     return 1 + countNodes(root->left) + countNodes(root->right);
    // }


    // 3.O(log(N)^2)
    // int getLeftDepth(Node* node) {
    //     int depth = 0;
    //     while (node) {
    //         depth++;
    //         node = node->left;
    //     }
    //     return depth;
    // }

    // int getRightDepth(Node* node) {
    //     int depth = 0;
    //     while (node) {
    //         depth++;
    //         node = node->right;
    //     }
    //     return depth;
    // }

    // int countNodes(Node* root) {
    //     if (root == NULL) return 0;

    //     int leftDepth = getLeftDepth(root);
    //     int rightDepth = getRightDepth(root);

    //     if (leftDepth == rightDepth) {
    //         return (1 << leftDepth) - 1;  // 2^depth - 1
    //     } else {
    //         return 1 + countNodes(root->left) + countNodes(root->right);
    //     }
    // }

