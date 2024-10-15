// vector<int> findSpiral(Node *root)
// {
//     vector<int> level;
//     if (root == NULL) 
//         return level;

//     queue<Node*> q;
//     q.push(root);
//     bool leftToRight = true;

//     while (!q.empty()) {
//         int size = q.size();
//         vector<int> temp;

//         while (size--) {
//             Node *curr = q.front();
//             q.pop();
//             temp.push_back(curr->data);

//             if (curr->left != NULL) 
//                 q.push(curr->left);
//             if (curr->right != NULL) 
//                 q.push(curr->right);
//         }

//         if (leftToRight) 
//             reverse(temp.begin(), temp.end());

//         level.insert(level.end(), temp.begin(), temp.end());
//         leftToRight = !leftToRight;
//     }

//     return level;
// }