    
//     Given a binary tree, return an array where elements represent the bottom view of the binary tree from left to right.

// Note: If there are multiple bottom-most nodes for a horizontal distance from the root, then the latter one in the level traversal 
// is considered. For example, in the below diagram, 3 and 4 are both the bottommost nodes at a horizontal distance of 0, here 4 will be considered.
    
    

    
    // vector<int> bottomView(Node *root) {
    //     vector<int> bottomview;
    //     if (!root) return bottomview;
        
    //     queue<pair<Node*, int>> q;
    //     q.push({root, 0});
        
    //     map<int, int> mp;
        
    //     while (!q.empty()) {
    //         Node* curr = q.front().first;
    //         int ver = q.front().second;
    //         q.pop();
            
    //         // Overwrite the value for each vertical position since we're interested in the bottom-most node.
    //         mp[ver] = curr->data;
            
    //         if (curr->left) {
    //             q.push({curr->left, ver - 1});
    //         }
    //         if (curr->right) {
    //             q.push({curr->right, ver + 1});
    //         }
    //     }

    //     for (auto it : mp) {
    //         bottomview.push_back(it.second);
    //     }
        
    //     return bottomview;
    // }