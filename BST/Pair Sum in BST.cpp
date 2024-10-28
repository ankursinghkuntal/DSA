// Given a Binary Search Tree and a target sum. Check whether there's a pair of Nodes in the BST with value summing up to the target sum.


// 1.

// class Solution{
//   public:
//     // root : the root Node of the given BST
//     // target : the target sum
//     void inorder(Node* root, vector<int>& in){
//         if(root){      
//             inorder(root->left, in);
//             in.push_back(root->data);
//             inorder(root->right,in);
//         }
//     }
    
//     int isPairPresent(struct Node *root, int target)
//     {
//         vector<int>in;
//         inorder(root,in);
//         int left = 0, right = in.size()-1;
//         while(left < right){
//             int sum = in[left] + in[right];
//             if(sum == target) return 1;
//             else if(sum < target) left++;
//             else right--;
//         }
//         return 0;
//     }
// };



// 2.
// class BST_Iterator {
//     stack<Node*> myStack;

//    //  reverse -> true -> before
//    //  reverse -> false -> next

//     bool reverse = true;

// public:
//     BST_Iterator(Node* root, bool isReverse) {
//         reverse = isReverse;
//         pushAll(root);
//     }
       

    //    // check whether the stack is empty or not

//     bool hasNext() {
//         return !myStack.empty();
//     }

    //   //  find the next element 

//     int next() {
//         Node* temp = myStack.top();
//         myStack.pop();
//         if (!reverse) pushAll(temp->right);
//         else pushAll(temp->left);
//         return temp->data;
//     }

// private:
//     void pushAll(Node* node) {
//         while (node != NULL) {
//             myStack.push(node);
//             if (reverse) {
//                 node = node->right;
//             } else {
//                 node = node->left;
//             }
//         }
//     }
// };

// class Solution {
// public:
//     int isPairPresent(Node* root, int target) {
//         if (!root) return 0;

//         BST_Iterator leftIter(root, false);  // Iterator for smallest elements (in-order)
//         BST_Iterator rightIter(root, true);  // Iterator for largest elements (reverse in-order)

//         int left = leftIter.next();
//         int right = rightIter.next();

//         while (left < right) {
//             int sum = left + right;

//             if (sum == target) return 1;
//             else if (sum < target) left = leftIter.next();
//             else right = rightIter.next();
//         }
//         return 0;
//     }
// };
