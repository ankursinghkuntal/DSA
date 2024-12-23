// There is BST given with the root node with the key part as an integer only. You need to find the in-order successor and predecessor of a given key.
//  If either predecessor or successor is not found, then set it to NULL.

// Note:- In an inorder traversal the number just smaller than the target is the predecessor and the number just greater than the target is the 
// successor. 


// T.C. = O(H)  &&  S.C. = O(1)

// class Solution
// {
//     public:
//     void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
//     {
//         Node*temp = root;
//         while (temp) {
//             if (temp->key > key) {
//                 suc = temp;
//                 temp = temp->left;
//             } else {
//                 temp = temp->right;
//             }
//         }
//         temp = root;
//         while (temp) {
//             if (temp->key < key) {
//                 pre = temp;
//                 temp = temp->right;
//             } else {
//                 temp = temp->left;
//             }
//         }
//     }
// };