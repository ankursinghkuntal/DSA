// bool findPath(Node* root, vector<int>& path, int n) {
//     if (root == NULL) return false;
//     path.push_back(root->data);
//     if (root->data == n) return true;
//     if (findPath(root->left, path, n) || findPath(root->right, path, n)) return true;
//     path.pop_back();
//     return false;
// }

// vector<int> Path(Node* root, int n) {
//     vector<int> path;
//     findPath(root, path, n);
//     return path;
// }
