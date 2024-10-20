// Given inorder and postorder traversals of a binary tree(having n nodes) in the arrays inorder[] and postorder[] respectively. The task is to 
// construct a unique binary tree from these traversals and return its root.
// Driver code will print the preorder traversal of the constructed tree.

// Note: The inorder and postorder traversals contain unique values, and every value present in the postorder traversal is also found in the 
// inorder traversal.




    // Node* buildTree(vector<int>& postorder, int postStart, int postEnd, vector<int>& inorder, int inStart, int inEnd, map<int,int>& inMap) {
    //     if (postStart > postEnd || inStart > inEnd) return NULL;

    //     Node* root = new Node(postorder[postEnd]);
    //     int inRoot = inMap[root->data];
    //     int numsLeft = inRoot - inStart;

    //     root->left = buildTree(postorder, postStart, postStart + numsLeft - 1, inorder, inStart, inRoot - 1, inMap);
    //     root->right = buildTree(postorder, postStart + numsLeft, postEnd - 1, inorder, inRoot + 1, inEnd, inMap);

    //     return root;
    // }

    // Node* buildTree(vector<int> inorder, vector<int> postorder) {
    //     int n = inorder.size();
    //     map<int,int> inMap;
    //     for (int i = 0; i < n; i++) {
    //         inMap[inorder[i]] = i;
    //     }

    //     return buildTree(postorder, 0, n - 1, inorder, 0, n - 1, inMap);
    // }