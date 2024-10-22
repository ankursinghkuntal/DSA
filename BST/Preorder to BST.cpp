    // void insert(Node* root, Node* temp) {
    //     Node* parent = NULL;
    //     while (root) {
    //         parent = root;
    //         if (root->data < temp->data) {
    //             root = root->right;
    //         } else {
    //             root = root->left;
    //         }
    //     }
    //     if (parent->data > temp->data) {
    //         parent->left = temp;
    //     } else {
    //         parent->right = temp;
    //     }
    // }

    // Node* Bst(int pre[], int size) {
    //     if (size == 0) return NULL;
        
    //     Node* root = new Node();
    //     root->data = pre[0];
    //     root->left = root->right = NULL;
        
    //     for (int i = 1; i < size; i++) {
    //         Node* temp = new Node();
    //         temp->data = pre[i];
    //         temp->left = temp->right = NULL;
    //         insert(root, temp);
    //     }
    //     return root;
    // }