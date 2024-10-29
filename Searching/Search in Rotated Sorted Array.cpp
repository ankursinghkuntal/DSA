// Given a sorted (in ascending order) and rotated array arr of distinct elements which may be rotated at some point and given an element key,
//  the task is to find the index of the given element key in the array arr. The whole array arr is given as the range to search.

// Rotation shifts elements of the array by a certain number of positions, with elements that fall off one end reappearing at the other end.
// Note:- 0-based indexing is followed & returns -1 if the key is not present.



// TC = O(n)

// class Solution {
//   public:
//     int search(vector<int>& arr, int key) {
//         for(int i = 0; i < arr.size(); i++){
//             if(arr[i] == key) return i;
//         }
//         return -1;
//     }
// };


// TC = O(logN)