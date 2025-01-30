// class Solution {
// public:
//     // Function to find the vertical order traversal of Binary Tree.
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         vector<vector<int>> vertical_traversal;
//         if (!root) return vertical_traversal;
        
//         // q stores {node, {vertical, level}}
//         queue<pair<TreeNode*, pair<int, int>>> q;
//         q.push({root, {0, 0}}); // Start with the root at vertical = 0 and level = 0

//         // vertical -> level -> multiset of nodes at that level
//         map<int, map<int, multiset<int>>> mp;
        
//         // BFS traversal
//         while (!q.empty()) {
//             TreeNode* curr = q.front().first;
//             int ver = q.front().second.first;
//             int lev = q.front().second.second;
//             mp[ver][lev].insert(curr->val);  // Insert node's value in the corresponding vertical and level
//             q.pop();
            
//             // Process left and right children
//             if (curr->left) {
//                 q.push({curr->left, {ver - 1, lev + 1}});
//             }
//             if (curr->right) {
//                 q.push({curr->right, {ver + 1, lev + 1}});
//             }
//         }

//         // Collecting the result from the map
//         for (auto it : mp) {
//             vector<int> temp;
//             for (auto it1 : it.second) {
//                 temp.insert(temp.end(), it1.second.begin(), it1.second.end());
//             }
//             vertical_traversal.push_back(temp);
//         }
//         return vertical_traversal;
//     }
// };





























// // Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
// // If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal
// //  of the tree.


//     // class Solution
//     // {
//     //     public:
//     //     //Function to find the vertical order traversal of Binary Tree.
//     //     vector<int> verticalOrder(Node *root)
//     //     {
//     //         vector<int> vertical_traversal;
//     //         if (!root) return vertical_traversal;
            
//     //         // q stores {node, vertical position}
//     //         queue<pair<Node*, int>> q;
//     //         q.push({root, 0});
            
//     //         // map to store vertical position and corresponding nodes' values
//     //         map<int, vector<int>> mp;
            
//     //         // BFS traversal
//     //         while (!q.empty()) {
//     //             Node* curr = q.front().first;
//     //             int ver = q.front().second;  // vertical position
//     //             q.pop();
                
//     //             // Insert the node's value into the corresponding vertical index
//     //             mp[ver].push_back(curr->data);
                
//     //             // Process left and right children
//     //             if (curr->left) {
//     //                 q.push({curr->left, ver - 1});
//     //             }
//     //             if (curr->right) {
//     //                 q.push({curr->right, ver + 1});
//     //             }
//     //         }
    
//     //         // Collecting the result from the map
//     //         for (auto it : mp) {
//     //             for (auto it1 : it.second) {
//     //                 vertical_traversal.push_back(it1);  // Insert the sorted nodes from multiset into result
//     //             }
//     //         }
//     //         return vertical_traversal;
//     //     }
//     // };
 
