// vector<int> leftView(Node *root)
// {
//    vector<int>left_view;
//    queue<Node*>q;
//    q.push(root);
//    while(!q.empty()){
//        int size = q.size();
//        Node*curr = q.front();
//        left_view.push_back(curr->data);
//        while(size--){
//            curr = q.front();
//            if(curr -> left != NULL) q.push(curr -> left);
//            if(curr -> right != NULL) q.push(curr -> right);
//            q.pop();
//        }
//    }
//    return left_view;
// }
