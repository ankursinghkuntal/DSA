    // bool check(Node*r1, Node*r2){
    //     if(r1 == NULL && r2 == NULL) return true;
    //     if(r1 == NULL || r2 == NULL) return false;
    //     if(r1->data == r2->data){
    //         return check(r1->left, r2->right) && check(r1->right, r2->left);
    //     }
    //     return false;
    // }
    
    // bool isSymmetric(struct Node* root)
    // {
    //     if(root == NULL) return true;
	//     Node* r1 = root->left;
	//     Node* r2 = root->right;
	//     return check(r1,r2);
    // }