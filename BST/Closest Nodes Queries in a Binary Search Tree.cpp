// class Solution {
// public:
//     vector<int> sortedValues;

//     void inorderTraversal(TreeNode* root) {
//         if (!root) return;
//         inorderTraversal(root->left);
//         sortedValues.push_back(root->val);
//         inorderTraversal(root->right);
//     }

//     vector<int> findFloorAndCeil(int input) {
//         int floor_val = -1, ceil_val = -1;
//         int n = sortedValues.size();

//         auto ceil_it = lower_bound(sortedValues.begin(), sortedValues.end(), input);
//         if (ceil_it != sortedValues.end()) {
//             ceil_val = *ceil_it;
//         }

//         auto floor_it = upper_bound(sortedValues.begin(), sortedValues.end(), input);
//         if (floor_it != sortedValues.begin()) {
//             floor_val = *(--floor_it);
//         }

//         return {floor_val, ceil_val};
//     }

//     vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
//         vector<vector<int>> result;

//         inorderTraversal(root);

//         for (int query : queries) {
//             result.push_back(findFloorAndCeil(query));
//         }

//         return result;
//     }
// };