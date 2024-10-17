  
//   Given a binary tree having n nodes. Check whether all of its nodes have the value equal to the sum of their child nodes. Return 1 if all 
//   the nodes in the tree satisfy the given properties, else it return 0.

// For every node, data value must be equal to the sum of data values in left and right children. Consider data value as 0 for NULL child. 
//  Also, leaves are considered to follow the property.
  
  
  
// ==================================================================O(N)======================================================

    // bool isLeaf(Node* root){
    //     return root->left == NULL && root->right == NULL;
    // }
    
    // bool isSumProperty(Node *root) {
        
    //     if(root == NULL) return true;
    //     if(isLeaf(root)) return true;
        
    //     int sum = 0;
    //     if(root->left) sum += root->left->data;
    //     if(root->right) sum += root->right->data;
        
    //     return (root->data == sum) && isSumProperty(root->left) && isSumProperty(root->right);
    // }