    // Node* insert(Node* node, int data) {
    //     Node* temp = node;
    //     Node* t1 = new Node(data);
        
    //     if(temp == NULL) return t1;
    //     Node* parent = NULL;
        
    //     while(temp) {
    //         parent = temp;
    //         if(temp -> data == data) return node;
    //         else if(temp->data < data) temp = temp->right;
    //         else temp = temp->left;
    //     }
        
    //     if(parent->data < data) parent->right = t1;
    //     else parent->left = t1;
        
    //     return node;
    // }









    // Node* insert(Node* node, int data) {
    //     Node *temp = new Node(data);
    //     if(node == NULL) return temp;
    //     else if(node->data < data){
    //         node->right = insert(node->right,data);
    //     }
    //     else if(node->data > data){
    //         node->left = insert(node->left,data);
    //     }
    //     return node;
    // }