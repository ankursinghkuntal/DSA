// class Solution{
//     public:
//         Node* LCA(Node *root, int n1, int n2)
//         {
//             while(true){
//                 if(n1>root->data && n2>root->data) root = root->right;
//                 else if(n1<root->data && n2<root->data) root = root->left;
//                 else return root;
//             }
//         }

// };