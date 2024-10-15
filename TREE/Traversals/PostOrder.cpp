// Recursive

    // void postorder(Node* root, vector<int>&post){
    //     if(root != NULL){
    //         postorder(root -> left, post);
    //         postorder(root->right, post);
    //         post.push_back(root->data);
    //     }
    // }
    
    // vector <int> postOrder(Node* root)
    // {
    //     vector<int>post;
    //     postorder(root, post);
    //     return post;
    // }





// =======================================Using Two Stack =========================================================

    // vector<int> postOrder(Node* root) {
    //     vector<int> post;
    //     if (root == NULL) return post;
        
    //     stack<Node*> st1, st2;
    //     st1.push(root);
        
    //     while (!st1.empty()) {
    //         Node* curr = st1.top();
    //         st1.pop();
    //         st2.push(curr);
            
    //         if (curr->left != NULL) st1.push(curr->left);
    //         if (curr->right != NULL) st1.push(curr->right);
    //     }
        
    //     while (!st2.empty()) {
    //         post.push_back(st2.top()->data);
    //         st2.pop();
    //     }
        
    //     return post;
    // }





// ============================================Using One Stack===========================================================================

// vector<int> postOrder(Node* root) {
//     vector<int> post;
//     if (root == NULL) return post;

//     stack<Node*> st;
//     Node* curr = root;

//     while (curr != NULL || !st.empty()) {
//         if (curr != NULL) {
//             st.push(curr);
//             curr = curr->left;
//         } else {
//             Node* temp = st.top()->right;
//             if (temp == NULL) {
//                 temp = st.top();
//                 st.pop();
//                 post.push_back(temp->data);
//                 while (!st.empty() && temp == st.top()->right) {
//                     temp = st.top();
//                     st.pop();
//                     post.push_back(temp->data);
//                 }
//             } else {
//                 curr = temp;
//             }
//         }
//     }

//     return post;
// }


