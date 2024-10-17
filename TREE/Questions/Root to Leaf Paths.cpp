// Given a Binary Tree of nodes, you need to find all the possible paths from the root node to all the leaf nodes of the binary tree.




    // bool isLeaf(Node* root) {
    //     return root->left == NULL && root->right == NULL;
    // }
    
    // vector<vector<int>> Paths(Node* root) {
    //     vector<vector<int>> paths;
    //     if (root == NULL) return paths; // Handle empty tree case
    
    //     stack<pair<Node*, vector<int>>> st;
    //     st.push({root, {root->data}});
    
    //     while (!st.empty()) {
    //         auto nodePath = st.top();
    //         st.pop();
    
    //         Node* curr = nodePath.first;
    //         vector<int> temp = nodePath.second;
    
    //         if (isLeaf(curr)) {
    //             paths.push_back(temp);
    //         }
    
    //         if (curr->right != NULL) {
    //             vector<int> rightPath = temp;
    //             rightPath.push_back(curr->right->data);
    //             st.push({curr->right, rightPath});
    //         }
    
    //         if (curr->left != NULL) {
    //             vector<int> leftPath = temp;
    //             leftPath.push_back(curr->left->data);
    //             st.push({curr->left, leftPath});
    //         }
    //     }
        
    //     return paths;
    // }