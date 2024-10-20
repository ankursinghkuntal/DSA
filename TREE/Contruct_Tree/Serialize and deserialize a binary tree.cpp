// Serialization is to store a tree in an array so that it can be later restored and deserialization is reading tree back from the array. 
// Complete the functions

// serialize() : stores the tree into an array a and returns the array.
// deSerialize() : deserializes the array to the tree and returns the root of the tree.
// Note: Multiple nodes can have the same data and the node values are always positive integers. Your code will be correct if the tree returned
//  by deSerialize(serialize(input_tree)) is same as the input tree. Driver code will print the in-order traversal of the tree returned by 
//  deSerialize(serialize(input_tree)).


    // // Encodes a tree to a single string.
    // string serialize(TreeNode* root) {
    //     if (!root) return "null";
        
    //     string TreeString = "";
    //     queue<TreeNode*> q;
    //     q.push(root);
        
    //     while (!q.empty()) {
    //         TreeNode* curr = q.front();
    //         q.pop();
            
    //         if (curr) {
    //             TreeString += to_string(curr->val) + ",";
    //             q.push(curr->left);
    //             q.push(curr->right);
    //         } else {
    //             TreeString += "null,";
    //         }
    //     }

    //     if (!TreeString.empty()) {
    //         TreeString.pop_back();
    //     }
        
    //     return TreeString;
    // }


    // // Decodes your encoded data to tree.
    // TreeNode* deserialize(string data) {
    //     if (data.empty() || data == "null") return nullptr;
        
    //     stringstream s(data);
    //     string str;
    //     getline(s, str, ',');
        
    //     TreeNode* root = new TreeNode(stoi(str));
    //     queue<TreeNode*> q;
    //     q.push(root);
        
    //     while (!q.empty()) {
    //         TreeNode* node = q.front();
    //         q.pop();
            
    //         if (getline(s, str, ',')) {
    //             if (str == "null") {
    //                 node->left = nullptr;
    //             } else {
    //                 node->left = new TreeNode(stoi(str));
    //                 q.push(node->left);
    //             }
    //         }
            
    //         if (getline(s, str, ',')) {
    //             if (str == "null") {
    //                 node->right = nullptr;
    //             } else {
    //                 node->right = new TreeNode(stoi(str));
    //                 q.push(node->right);
    //             }
    //         }
    //     }
        
    //     return root;
    // }





    //vector<int> serialize(Node *root) {
    //     vector<int> MyTree;
    //     queue<Node*> q;
    //     q.push(root);
        
    //     while (!q.empty()) {
    //         Node* curr = q.front();
    //         q.pop();
            
    //         if (curr) {
    //             MyTree.push_back(curr->data);
    //             q.push(curr->left);
    //             q.push(curr->right);
    //         } else {
    //             MyTree.push_back(-1);
    //         }
    //     }
        
    //     return MyTree;
    // }
    
    // Node* deSerialize(vector<int> &A) {
    //     if (A.empty() || A[0] == -1) return nullptr;  // Handle empty or null root case
        
    //     queue<Node*> q;
    //     Node* root = new Node(A[0]);
    //     q.push(root);
        
    //     int index = 0; 
        
    //     while (!q.empty() && index < A.size()) {
    //         Node* curr = q.front();
    //         q.pop();
            
    //         index+=1;
    //         if (index < A.size() && A[index] != -1) {
    //             curr->left = new Node(A[index]);
    //             q.push(curr->left);
    //         } else {
    //             curr->left = nullptr;
    //         }
            
    //         index+=1;
    //         if (index < A.size() && A[index] != -1) {
    //             curr->right = new Node(A[index]);
    //             q.push(curr->right);
    //         } else {
    //             curr->right = nullptr;
    //         }
    //     }
        
    //     return root;
    // }