// Recursive


// void preOrder(Node* root, vector<int>&pre){
//     if(root != NULL){
//         pre.push_back(root->data);
//         preOrder(root -> left, pre);
//         preOrder(root->right, pre);
//     }
// }

// vector <int> preorder(Node* root)
// {
//    vector<int>pre;
//    preOrder(root, pre);
//    return pre;
// }






// vector <int> preorder(Node* root)
// {
//    vector<int>pre;
//    if(root == NULL) return pre;
   
//    stack<Node*>st;
//    st.push(root);
   
//    while( !st.empty()){
       
//        Node* curr = st.top();
//        pre.push_back(curr->data);
//        st.pop();
//        if(curr->right != NULL) st.push(curr->right);
//        if(curr->left != NULL) st.push(curr->left);
       
//    }
//    return pre;
// }





// vector<int> preorder(Node* root) {
//     vector<int> pre;
//     if (root == NULL) return pre;

//     stack<Node*> st;
//     Node* curr = root;

//     while (curr != NULL || !st.empty()) {
//         while (curr != NULL) {
//             pre.push_back(curr->data);
//             if (curr->right != NULL) {
//                 st.push(curr->right);
//             }
//             curr = curr->left;
//         }
//         if (!st.empty()) {
//             curr = st.top();
//             st.pop();
//         }
//     }

//     return pre;
// }
