// int findCeil(Node* root, int input) {
//     int ceil_val = -1;

//     while (root) {
//         if (root->data == input) {
//             return root->data;
//         } else if (root->data > input) {
//             ceil_val = root->data;
//             root = root->left;
//         } else {
//             root = root->right;
//         }
//     }

//     return ceil_val;
// }