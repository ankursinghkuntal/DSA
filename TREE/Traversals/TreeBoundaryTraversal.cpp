// Anti ClockWise




#include <iostream>
#include <vector>
#include <algorithm>  // For reverse()

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class Solution {
public:
    bool isLeaf(Node *root) {
        return !root->left && !root->right;
    }
    
    void addLeftBoundary(Node* root, vector<int>& boundary) {
        Node* curr = root->left;
        while (curr) {
            if (!isLeaf(curr)) boundary.push_back(curr->data);
            if (curr->left) curr = curr->left;
            else curr = curr->right;   
        }
    }
    
    void addRightBoundary(Node* root, vector<int>& boundary) {
        Node* curr = root->right;
        vector<int> temp;
        while (curr) {
            if (!isLeaf(curr)) temp.push_back(curr->data);
            if (curr->right) curr = curr->right;
            else curr = curr->left;   
        }
        reverse(temp.begin(), temp.end());
        boundary.insert(boundary.end(), temp.begin(), temp.end());
    }
    
    void addLeaves(Node* root, vector<int>& boundary) {
        if (isLeaf(root)) {
            boundary.push_back(root->data);
            return;
        }
        if (root->left) addLeaves(root->left, boundary);
        if (root->right) addLeaves(root->right, boundary);
    }
    
    vector<int> boundary(Node *root) {
        vector<int> boundary;
        if (!root) return boundary;
        if (!isLeaf(root)) boundary.push_back(root->data);
        addLeftBoundary(root, boundary);
        addLeaves(root, boundary);
        addRightBoundary(root, boundary);
        return boundary;
    }
};

int main() {
    // Example to create a binary tree and find its boundary traversal
    Node* root = new Node();
    root->data = 1;
    root->left = new Node();
    root->left->data = 2;
    root->right = new Node();
    root->right->data = 3;
    root->left->left = new Node();
    root->left->left->data = 4;
    root->left->right = new Node();
    root->left->right->data = 5;
    root->right->left = new Node();
    root->right->left->data = 6;
    root->right->right = new Node();
    root->right->right->data = 7;

    Solution sol;
    vector<int> result = sol.boundary(root);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}
