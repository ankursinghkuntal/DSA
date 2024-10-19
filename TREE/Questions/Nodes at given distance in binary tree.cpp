// Given a binary tree, a target node in the binary tree, and an integer value k, find all the nodes that are at distance k from the given target
//  node. No parent pointers are available.
// Note:

// You can return the answer in any order, but the final output will always be displayed in sorted order by the driver code.
// The tree will not contain duplicate values.





    // void inorder(Node* root, int target, Node*& tar) {
    //     if (root != NULL) {
    //         inorder(root->left, target, tar);
    //         if (root->data == target) {
    //             tar = root;  // Modify tar directly since it's passed by reference
    //             return;
    //         }
    //         inorder(root->right, target, tar);
    //     }
    // }
      
    // void markParents(Node* root, unordered_map<Node*, Node*>& parent_track) {
    //     queue<Node*> q;
    //     q.push(root);
    //     while (!q.empty()) {
    //         Node* curr = q.front();
    //         q.pop();
    //         if (curr->left) {
    //             q.push(curr->left);
    //             parent_track[curr->left] = curr;
    //         }
    //         if (curr->right) {
    //             q.push(curr->right);
    //             parent_track[curr->right] = curr;
    //         }
    //     }
    // }
  
    // vector<int> KDistanceNodes(Node* root, int target, int k) {
    //     // Step 1: Find the target node
    //     Node* tar = NULL;
    //     inorder(root, target, tar);
    //     if (tar == NULL) {
    //         return {}; // If the target is not found, return an empty vector
    //     }
        
    //     // Step 2: Mark parents of all nodes
    //     unordered_map<Node*, Node*> parent_track;
    //     markParents(root, parent_track);
        
    //     // Step 3: Perform BFS to find all nodes at distance k
    //     unordered_map<Node*, bool> vis;
    //     queue<Node*> q;
    //     q.push(tar);
    //     vis[tar] = true;
    //     int curr_level = 0;
        
    //     while (!q.empty()) {
    //         int size = q.size();
    //         if (curr_level == k) break;  // We've reached the desired level
    //         curr_level++;
    //         for (int i = 0; i < size; i++) {
    //             Node* curr = q.front();
    //             q.pop();
                
    //             // Check left child
    //             if (curr->left && !vis[curr->left]) {
    //                 q.push(curr->left);
    //                 vis[curr->left] = true;
    //             }
    //             // Check right child
    //             if (curr->right && !vis[curr->right]) {
    //                 q.push(curr->right);
    //                 vis[curr->right] = true;
    //             }
    //             // Check parent
    //             if (parent_track[curr] && !vis[parent_track[curr]]) {
    //                 q.push(parent_track[curr]);
    //                 vis[parent_track[curr]] = true;
    //             }
    //         }
    //     }
        
    //     // Step 4: Collect all nodes at distance k
    //     vector<int> Kth_Node;
    //     while (!q.empty()) {
    //         Kth_Node.push_back(q.front()->data);
    //         q.pop();
    //     }
        
    //     // Step 5: Sort the result (as required by the problem statement)
    //     sort(Kth_Node.begin(), Kth_Node.end());
    //     return Kth_Node;
    // } 