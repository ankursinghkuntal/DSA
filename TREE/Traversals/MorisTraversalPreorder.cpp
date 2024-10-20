
// T.c = O(N)  amotised



// vector<int> preorder(Node* root) {
//     vector<int> pre;
//     if (root == NULL) return pre;

//     Node* curr = root;

//     while (curr) {
//         if (!curr->left) {
//             pre.push_back(curr->data);
//             curr = curr->right;
//         } else {
//             Node* prev = curr->left;
//             while (prev->right && prev->right != curr) {
//                 prev = prev->right;
//             }

//             if (prev->right == NULL) {
//                 pre.push_back(curr->data);
//                 prev->right = curr;
//                 curr = curr->left;
//             } else {
//                 prev->right = NULL;
//                 curr = curr->right;
//             }
//         }
//     }

//     return pre;
// }