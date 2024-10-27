// class Solution{
//   public:
//     Node *inOrderSuccessor(Node *root, Node *x) {
//         Node *successor = NULL;
        
//         while (root) {
//             if (root->data > x->data) {
//                 successor = root;
//                 root = root->left;
//             } else {
//                 root = root->right;
//             }
//         }
        
//         return successor;
//     }
// };