// Given two arrays of inorder and preorder traversal of size n. Construct a tree using the inorder and preorder arrays and return the
//  root node of the constructed tree.


// T.C. = O(N)

    // Node* buildTree(int pre[], int preStart, int preEnd, int in[], int inStart, int inEnd, map<int,int>& inMap){
    //     if(preStart > preEnd || inStart > inEnd) return NULL;
    //     Node *root = new Node(pre[preStart]);
    //     int inRoot = inMap[root->data];
    //     int numsLeft = inRoot - inStart;
    //     root->left = buildTree(pre, preStart+1, preStart + numsLeft, in, inStart, inRoot-1, inMap);
    //     root->right = buildTree(pre, preStart + numsLeft + 1, preEnd, in, inRoot + 1, inEnd, inMap);
    //     return root;
    // }
    
    // Node* buildTree(int in[], int pre[], int n) {
    //     map<int,int> inMap;
    //     for(int i = 0; i < n; i++) {
    //         inMap[in[i]] = i;
    //     }
    //     Node* root = buildTree(pre, 0, n-1, in, 0, n-1, inMap);
    //     return root;
    // }