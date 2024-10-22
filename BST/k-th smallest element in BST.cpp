    // 1.  TC = O(N) && SC = O(1)
    
    // int inorder(Node* root, int K, int &cnt) {
    //     if (!root) return -1;

    //     int left = inorder(root->left, K, cnt);
    //     if (left != -1) return left;

    //     cnt++;
    //     if (cnt == K) return root->data;

    //     return inorder(root->right, K, cnt);
    // }

    // int KthSmallestElement(Node *root, int K) {
    //     int cnt = 0;
    //     int result = inorder(root, K, cnt);
    //     return  result;  
    // }


    // 2. storing inorder and find it

    // 3.perform any pre, post and inorder  store in an array than sort it ,  after this simply find that element. 