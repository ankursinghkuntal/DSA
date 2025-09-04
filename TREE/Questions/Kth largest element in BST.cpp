class Solution {
  public:
    int cnt = 0;

    int kthLargest(Node* root, int k) {
        if (root == NULL) return -1;

        // Traverse the right subtree first
        int right = kthLargest(root->right, k);
        if (right != -1) return right;

        // Increment count for the current node
        cnt++;
        if (cnt == k) return root->data;

        // Traverse the left subtree
        return kthLargest(root->left, k);
    }
};