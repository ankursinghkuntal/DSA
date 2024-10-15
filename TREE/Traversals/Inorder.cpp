// Recursive
    // void inorder(Node* root, vector<int>&in){
    //     if(root != NULL){
    //         inorder(root -> left, in);
    //         in.push_back(root->data);
    //         inorder(root->right, in);
    //     }
    // }
    
    // vector <int> inOrder(Node* root)
    // {
    //    vector<int>in;
    //    inorder(root, in);
    //    return in;
    // }





    // vector <int> inOrder(Node* root)
    // {
    //    vector<int>in;
    //    stack<Node*>st;
    //    Node *curr = root;
       
    //    while(!st.empty() || curr != NULL){
    //        while(curr != NULL){
    //            st.push(curr);
    //            curr = curr -> left;
    //        }
    //        curr = st.top();
    //        st.pop();
    //        in.push_back(curr->data);
    //        curr = curr -> right;
    //    }
    //    return in;
    // }