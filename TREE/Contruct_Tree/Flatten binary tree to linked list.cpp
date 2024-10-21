// Given the root of a binary tree, flatten the tree into a "Linked list":

// The "linked list" should use the same Node class where the right child pointer points to the next node in the list and the left
//  child pointer is always null.
// The "linked list" should be in the same order as a pre-order traversal of the binary tree



// ======================  T.C. = O(N) ==========================
    // Node* prev = NULL;
    // void flatten(Node *root)
    // {
    //     if(root == NULL) return;
    //     flatten(root -> right);
    //     flatten(root->left);
        
    //     root -> right = prev;
    //     root -> left = NULL;
    //     prev = root;
    // }





// ======================  T.C. = O(N) ==========================
    // void flatten(Node *root)
    // {
    //     stack<Node*>st;
    //     st.push(root);
    //     while(!st.empty()){
    //         Node *curr = st.top();
    //         st.pop();
    //         if(curr->right) st.push(curr->right);
    //         if(curr->left) st.push(curr->left);
    //         if(!st.empty()){
    //             curr->right = st.top();
    //         }
    //         curr->left = NULL;
    //     }
    // }



    // ==========================================We can use Morris Traversal(preorder)=================