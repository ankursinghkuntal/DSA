// class Solution {
// public:
//     // Function to partition the linked list around a pivot node
//     Node* partition(Node* head, Node* tail) {
//         // Choose the first node as the pivot
//         Node* pivot = head;
//         Node* pre = head;   // Points to the last node with value less than pivot
//         Node* curr = head->next;  // Starts from the second node

//         // Iterate through the list until reaching the tail node
//         while (curr != tail->next) {
//             if (curr->data < pivot->data) {
//                 pre = pre->next;   // Move 'pre' one step forward
//                 swap(curr->data, pre->data);   // Swap current node data with 'pre' node data
//             }
//             curr = curr->next;  // Move to the next node
//         }
//         // Place the pivot element in its correct position
//         swap(pivot->data, pre->data);
//         return pre;  // Return the new pivot node
//     }

//     // Recursive function to perform quicksort on a linked list
//     void quickSortRecursive(Node* head, Node* tail) {
//         // Base condition to stop recursion
//         if (head != tail && head != nullptr && tail != nullptr) {
//             // Partition the list and get the new pivot position
//             Node* pivot = partition(head, tail);
//             // Recursively sort the sublist before the pivot
//             quickSortRecursive(head, pivot);
//             // Recursively sort the sublist after the pivot
//             quickSortRecursive(pivot->next, tail);
//         }
//     }
  
//     // Main function to initiate quicksort on the linked list
//     Node* quickSort(Node* head) {
//         // Find the tail node of the linked list
//         Node* tail = head;
//         while (tail->next != nullptr) {
//             tail = tail->next;
//         }
//         // Call the recursive quicksort function
//         quickSortRecursive(head, tail);
//         return head;  // Return the head of the sorted list
//     }
// };