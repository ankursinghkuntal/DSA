    
//     Given the root of a binary tree, return the maximum width of the given tree.

// The maximum width of a tree is the maximum width among all levels.

// The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null 
// nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the 
// length calculation.

// It is guaranteed that the answer will in the range of a 32-bit signed integer.


    
    
    // int widthOfBinaryTree(TreeNode* root) {
    //     queue<pair<TreeNode*,long long>> q;
    //     if(root==NULL){
    //         return 0;
    //     }

    //     q.push({root, 0});
    //     int ans=0;

    //     while(!q.empty()){
    //         int size = q.size();
    //         long long first,last;
    //         long long min = q.front().second;
            
    //         for(int i = 0; i < size; i++){
    //             long long id = q.front().second - min; 
    //             TreeNode *node = q.front().first;
    //             q.pop();

    //             if(i==0) first=id;

    //             if(i==size-1) last=id;

    //             if(node->left != NULL){
    //                 q.push({node->left, id*2+1});
    //             }
    //             if(node->right != NULL){
    //                 q.push({node->right, id*2+2});
    //             }
    //         }
    //         ans = max(ans,int(last-first +1));
    //     }
    //     return ans;
    // }