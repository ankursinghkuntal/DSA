
// You are given the root of a binary search tree(BST), where exactly two nodes were swapped by mistake. Fix (or correct) the BST by swapping 
// them back. Do not change the structure of the tree.
// Note: It is guaranteed that the given input will form BST, except for 2 nodes that will be wrong. All changes must be reflected in the 
// original linked list.


// class Solution {
// public:
//     void inorder(Node* root, Node*& prev, Node*& first, Node*& middle, Node*& last) {
//         if (root == NULL) return;

//         inorder(root->left, prev, first, middle, last);

//         if (prev && root->data < prev->data) {
//             if (!first) {
//                 first = prev;
//                 middle = root;
//             } else {
//                 last = root;
//             }
//         }
        
//         prev = root;
        
//         inorder(root->right, prev, first, middle, last);
//     }

//     void correctBST(Node* root) {
//         Node* first = NULL, *middle = NULL, *last = NULL, *prev = NULL;

//         inorder(root, prev, first, middle, last);

//         if (last) swap(first->data, last->data);
//         else swap(first->data, middle->data);
//     }
// };