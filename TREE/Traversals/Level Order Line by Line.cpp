// vector<vector<int>> levelOrder(Node* node)
// {
//   vector<vector<int>> level;
//   queue<Node*>q;
//   q.push(node);
//   while(!q.empty()){
//       int size = q.size();
//       vector<int>temp;
//       while(size--){
//           Node *curr = q.front();
//           q.pop();
//           temp.push_back(curr->data);
//           if(curr -> left != NULL){
//               q.push(curr->left);
//           }
//           if(curr -> right != NULL){
//               q.push(curr->right);
//           }
//       }
//      level.push_back(temp);
//   }
//   return level;
// }