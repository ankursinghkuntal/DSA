// Node *copy(Node *node)
// {
//     if (node == NULL)
//         return node;

//     Node *newNode = new Node(node->data);
//     newNode->left = copy(node->left);
//     newNode->right = copy(node->right);

//     return newNode;
// }