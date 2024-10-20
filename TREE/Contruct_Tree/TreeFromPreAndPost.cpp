
    // int preIndex = 0;

    // Node* constructTree(vector<int>& preorder, vector<int>& postorder, int postStart, int postEnd, unordered_map<int, int>& postMap) {
    //     if (preIndex >= preorder.size() || postStart > postEnd) {
    //         return nullptr;
    //     }

    //     Node* root = new Node(preorder[preIndex]);
    //     preIndex += 1;

    //     if (postStart == postEnd) {
    //         return root;
    //     }

    //     int postIndex = postMap[preorder[preIndex]];

    //     root->left = constructTree(preorder, postorder, postStart, postIndex, postMap);
    //     root->right = constructTree(preorder, postorder, postIndex + 1, postEnd - 1, postMap);

    //     return root;
    // }

    // Node* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
    //     unordered_map<int, int> postMap;
    //     for (int i = 0; i < postorder.size(); i++) {
    //         postMap[postorder[i]] = i;
    //     }
    //     return constructTree(preorder, postorder, 0, postorder.size() - 1, postMap);
    // }

