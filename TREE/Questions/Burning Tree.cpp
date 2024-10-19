//  Given a binary tree and a node data called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. 
//  It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child, and parent.
// Note: The tree contains unique values.
 
 
 
 
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
  
    // int minTime(Node* root, int target) {
    //     // Step 1: Find the target node
    //     Node* tar = NULL;
    //     inorder(root, target, tar);
    //     if (tar == NULL) {
    //         return 0; // Target node not found
    //     }
        
    //     // Step 2: Mark parents of all nodes
    //     unordered_map<Node*, Node*> parent_track;
    //     markParents(root, parent_track);
        
    //     // Step 3: Perform BFS from the target node
    //     unordered_map<Node*, bool> vis;
    //     queue<Node*> q;
    //     q.push(tar);
    //     vis[tar] = true;
    //     int time_taken = 0;
        
    //     while (!q.empty()) {
    //         int size = q.size();
    //         bool burned = false;
            
    //         for (int i = 0; i < size; i++) {
    //             Node* curr = q.front();
    //             q.pop();
                
    //             // Check left child
    //             if (curr->left && !vis[curr->left]) {
    //                 q.push(curr->left);
    //                 vis[curr->left] = true;
    //                 burned = true;
    //             }
    //             // Check right child
    //             if (curr->right && !vis[curr->right]) {
    //                 q.push(curr->right);
    //                 vis[curr->right] = true;
    //                 burned = true;
    //             }
    //             // Check parent
    //             if (parent_track[curr] && !vis[parent_track[curr]]) {
    //                 q.push(parent_track[curr]);
    //                 vis[parent_track[curr]] = true;
    //                 burned = true;
    //             }
    //         }
    //         if (burned) {
    //             time_taken++;
    //         }
    //     }
        
    //     return time_taken;
    // }