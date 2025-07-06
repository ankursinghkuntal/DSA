class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        vector<int>topView;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        map<int,int>mp;
        while(!q.empty()){
            Node* temp = q.front().first;
            int ver = q.front().second;
            if(mp.find(ver) == mp.end()) mp[ver] = temp->data;
            if(temp -> left != NULL){
                q.push({temp->left,ver-1});
            }
            if(temp->right != NULL){
                q.push({temp->right,ver+1});
            }
            q.pop();
        }
        for(auto it : mp){
            topView.push_back(it.second);
        }
        return topView;
    }
};
        
        
        

        
        

        // vector<int> topView(Node *root)
        // {
        //     vector<int> topview;
        //     if (!root) return topview;
            
        //     // q stores {node, vertical position}
        //     queue<pair<Node*, int>> q;
        //     q.push({root, 0});
            
        //     // map to store vertical position and corresponding nodes' values
        //     map<int, vector<int>> mp;
            
        //     // BFS traversal
        //     while (!q.empty()) {
        //         Node* curr = q.front().first;
        //         int ver = q.front().second;  // vertical position
        //         q.pop();
                
        //         // Insert the node's value into the corresponding vertical index
        //         mp[ver].push_back(curr->data);
                
        //         // Process left and right children
        //         if (curr->left) {
        //             q.push({curr->left, ver - 1});
        //         }
        //         if (curr->right) {
        //             q.push({curr->right, ver + 1});
        //         }
        //     }
    
        //     // Collecting the result from the map
        //     for (auto it : mp) {
        //             topview.push_back(it.second[0]);  // Insert the sorted nodes from multiset into result
        //     }
        //     return topview;
        // }











// class Solution
// {
//     public:
//     //Function to find the top view of Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         vector<int> topview;
//         if (!root) return topview;
        
//         // q stores {node, vertical position}
//         queue<pair<Node*, int>> q;
//         q.push({root, 0});
        
//         // map to store vertical position and corresponding node's value
//         map<int, int> mp;
        
//         // BFS traversal
//         while (!q.empty()) {
//             Node* curr = q.front().first;
//             int ver = q.front().second;  // vertical position
//             q.pop();
            
//             // Insert the node's value into the map only if it's the first node at that vertical position
//             if (mp.find(ver) == mp.end()) {
//                 mp[ver] = curr->data;
//             }
            
//             // Process left and right children
//             if (curr->left) {
//                 q.push({curr->left, ver - 1});
//             }
//             if (curr->right) {
//                 q.push({curr->right, ver + 1});
//             }
//         }

//         // Collecting the result from the map
//         for (auto it : mp) {
//             topview.push_back(it.second);  // Insert the topmost node at each vertical level
//         }
//         return topview;
//     }
// };
