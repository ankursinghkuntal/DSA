

vector<int> inorder(Node *root) {
    vector<int> in;
    if (root == NULL) return in;
    
    Node* curr = root;
    
    while (curr) {
        if (!curr->left) {
            in.push_back(curr->data);
            curr = curr->right;
        } else {
            Node* prev = curr->left;
            while (prev->right && prev->right != curr) {
                prev = prev->right;
            }
            if (prev->right == NULL) {
                prev->right = curr;
                curr = curr->left;
            } else {
                prev->right = NULL;
                in.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return in;
}








