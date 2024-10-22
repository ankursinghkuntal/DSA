    // int Ceil(Node* root, int K) {
    //     int ceil_val = -1;
    //     while (root) {
    //         if (root->data == K) {
    //             return root->data;
    //         }
    //         if (root->data > K) {
    //             ceil_val = root->data;
    //             root = root->left;
    //         } else {
    //             root = root->right;
    //         }
    //     }
    //     return ceil_val;
    // }
    
    // int Floor(Node* root, int K) {
    //     int floor_val = -1;
    //     while (root) {
    //         if (root->data == K) {
    //             return root->data;
    //         }
    //         if (root->data < K) {
    //             floor_val = root->data;
    //             root = root->right;
    //         } else {
    //             root = root->left;
    //         }
    //     }
    //     return floor_val;
    // }

    // int minDiff(Node* root, int K) {
    //     int ceilVal = Ceil(root, K);
    //     int floorVal = Floor(root, K);

    //     int diffCeil = (ceilVal == -1) ? INT_MAX : abs(ceilVal - K);
    //     int diffFloor = (floorVal == -1) ? INT_MAX : abs(floorVal - K);

    //     return min(diffCeil, diffFloor);
    // }