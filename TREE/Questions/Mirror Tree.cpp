// void mirror(Node* node) {
//     if (node == NULL) return;

//     Node* temp = node->left;
//     node->left = node->right;
//     node->right = temp;

//     mirror(node->left);
//     mirror(node->right);

// }





// Node *mirror(Node *node)
// {
//     if (node == NULL)
//         return node;

//     Node *newNode = new Node(node->data);
//     newNode->left = mirror(node->right);
//     newNode->right = mirror(node->left);

//     return newNode;
// }
