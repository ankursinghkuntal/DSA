// we cannot decrease the value of the node

// =====================================================================O(N)=========================================================

// void changeTree(BinaryTreeNode<int> *root) {
//     if (root == NULL) return;

//     int sum = 0;
//     if (root->left) sum += root->left->data;
//     if (root->right) sum += root->right->data;

//     if (sum < root->data) {
//         if (root->left) root->left->data = root->data;
//         if (root->right) root->right->data = root->data;
//     }

//     changeTree(root->left);
//     changeTree(root->right);

//     int total = 0;
//     if (root->left) total += root->left->data;
//     if (root->right) total += root->right->data;

//     if (root->left || root->right) root->data = total;

// }
