class Solution {
public:
    int Kth(TreeNode* root, int k, int &cnt) {
        if (root == NULL) return -1;

        // Search in the left subtree
        int left = Kth(root->left, k, cnt);
        if (left != -1) return left;

        // Increment count for the current node
        cnt++;
        if (cnt == k) return root->val;

        // Search in the right subtree
        return Kth(root->right, k, cnt);
    }

    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        return Kth(root, k, cnt);
    }
};
