
// Given a binary tree. Find the size of its largest subtree which is a Binary Search Tree.
// Note: Here Size equals the number of nodes in the subtree.


// class nodeValue {
// public:
//     int maxNode, minNode, maxSize;
//     nodeValue(int maxNode, int minNode, int maxSize) {
//         this->maxNode = maxNode;
//         this->minNode = minNode;
//         this->maxSize = maxSize;
//     }
// };

// class Solution {
// private:
//     nodeValue largestBstHelper(Node* root) {
//         if (root == nullptr) {
//             return nodeValue(INT_MIN, INT_MAX, 0); // Base case for null node
//         }

//         // Recursively get values from the left and right subtrees
//         nodeValue left = largestBstHelper(root->left);
//         nodeValue right = largestBstHelper(root->right);

//         // Check if the current node is a BST root
//         if (left.maxNode < root->data && root->data < right.minNode) {
//             // It is a valid BST root
//             int minValue = (root->left == nullptr) ? root->data : left.minNode;
//             int maxValue = (root->right == nullptr) ? root->data : right.maxNode;
//             return nodeValue(maxValue, minValue, left.maxSize + right.maxSize + 1);
//         }

//         // If not a BST, return the larger BST size from either subtree
//         return nodeValue(INT_MAX, INT_MIN, max(left.maxSize, right.maxSize));
//     }

// public:
//     int largestBst(Node* root) {
//         return largestBstHelper(root).maxSize;
//     }
// };