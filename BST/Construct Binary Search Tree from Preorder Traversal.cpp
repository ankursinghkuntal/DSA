// class Solution {
// public:
//     TreeNode* constructTree(vector<int>& preorder, int &i, int bound) {
//         if(i == preorder.size() || preorder[i] > bound) return NULL;
        
//         TreeNode* root = new TreeNode(preorder[i++]);
//         root->left = constructTree(preorder, i, root->val);
//         root->right = constructTree(preorder, i, bound);
        
//         return root;
//     }
    
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         int i = 0;
//         return constructTree(preorder, i, INT_MAX);
//     }
// };