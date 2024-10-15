    // vector<int> levelOrder(Node* root)
    // {
    //   queue<Node*>q;
    //   q.push(root);
      
    //   vector<int>level;
    //   while(!q.empty()){
    //       Node* curr = q.front();
    //       q.pop();
    //       level.push_back(curr->data);
    //       if(curr -> left != NULL) q.push(curr->left);
    //       if(curr -> right != NULL) q.push(curr->right);
    //   }
    //   return level;
    // }