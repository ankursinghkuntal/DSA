    // bool levelOrder(Node *r1, Node *r2)
    // {
    //   queue<Node*>q1,q2;
    //   q1.push(r1);
    //   q2.push(r2);
      
    //   while(!q1.empty() && !q2.empty() ){
    //       Node* curr1 = q1.front();
    //       Node* curr2 = q2.front();
    //       q1.pop();
    //       q2.pop();
    //       if(curr1->data != curr2->data) return false;
    //       if(curr1 -> left != NULL) q1.push(curr1->left);
    //       if(curr1 -> right != NULL) q1.push(curr1->right);
          
    //       if(curr2 -> left != NULL) q2.push(curr2->left);
    //       if(curr2 -> right != NULL) q2.push(curr2->right);
    //   }
    //   return (q1.empty() && q2.empty());
    // }
    
    // bool isIdentical(Node *r1, Node *r2)
    // {
    //     return levelOrder(r1, r2);
    // }