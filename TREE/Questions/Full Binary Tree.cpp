
//    A full binary tree is a binary tree with either zero or two child nodes for each node.



// bool isLeaf(Node* root){
//     if(!root->left && !root->right) return true;
//     if(root->left && root->right){
//         return isLeaf(root->left) && isLeaf(root->right);
//     }
//     return false;
// }
// bool isFullTree (struct Node* root)
// {
//     if(isLeaf(root)) return true;
//     return isLeaf(root);
// }