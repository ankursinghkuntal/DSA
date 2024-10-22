// Node* deleteNode(Node* root, int X) {
//     Node* temp = root;
//     Node* parent = NULL;
    
//     // Find the node to be deleted and its parent
//     while (temp && temp->data != X) {
//         parent = temp;
//         if (X < temp->data) {
//             temp = temp->left;
//         } else {
//             temp = temp->right;
//         }
//     }
    
//     if (temp == NULL) return root;  // Node to be deleted not found
    
//     // Case 1: Node is a leaf (no children)
//     if (!temp->left && !temp->right) {
//         if (parent == NULL) return NULL;  // The root itself is the only node and is being deleted
//         if (parent->left == temp) parent->left = NULL;
//         else parent->right = NULL;
//         delete temp;
//     }
    
//     // Case 2: Node has only a right child
//     else if (!temp->left) {
//         if (parent == NULL) return temp->right;  // Deleting the root and it has only right child
//         if (parent->left == temp) parent->left = temp->right;
//         else parent->right = temp->right;
//         delete temp;
//     }
    
//     // Case 3: Node has only a left child
//     else if (!temp->right) {
//         if (parent == NULL) return temp->left;  // Deleting the root and it has only left child
//         if (parent->left == temp) parent->left = temp->left;
//         else parent->right = temp->left;
//         delete temp;
//     }
    
//     // Case 4: Node has two children
//     else {
//         Node* t1 = temp->left;  // Find the largest node in the left subtree
//         Node* t1Parent = temp;
        
//         // Find the rightmost (largest) node in the left subtree
//         while (t1->right) {
//             t1Parent = t1;
//             t1 = t1->right;
//         }
        
//         // Replace temp's data with t1's data (in-order predecessor)
//         temp->data = t1->data;
        
//         // Remove t1 (it has at most one child, which will always be its left child)
//         if (t1Parent->right == t1) t1Parent->right = t1->left;
//         else t1Parent->left = t1->left;
//         delete t1;
//     }
    
//     return root;
// }
// =================================O(height)========================