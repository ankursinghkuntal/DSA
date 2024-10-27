// class Solution {
//   public:
//     bool check(Node* root, int mn, int mx) {
//         if (root == NULL) return true;
//         if (root->data >= mx || root->data <= mn) return false;
//         return check(root->left, mn, root->data) && check(root->right, root->data, mx);
//     }

//     bool isBST(Node* root) {
//         int mn = INT_MIN;
//         int mx = INT_MAX;
//         return check(root, mn, mx);
//     }
// };