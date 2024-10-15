    // vector<int> maximumValue(Node* node) {
        
    //     vector<int> MaxValues;
    //     if (node == NULL) return MaxValues;
        
    //     queue<Node*> q;
    //     q.push(node);
        
    //     while (!q.empty()) {
    //         int size = q.size();
    //         int mx = INT_MIN;
            
    //         while (size--) {
    //             Node *temp = q.front();
    //             q.pop();
    //             mx = max(mx, temp->data);
                
    //             if (temp->left != NULL) q.push(temp->left);
    //             if (temp->right != NULL) q.push(temp->right);
    //         }
            
    //         MaxValues.push_back(mx);
    //     }
        
    //     return MaxValues;
    // }