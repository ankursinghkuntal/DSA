
// TC = O(N)    SC = O(N)

// class Solution {
// public:
//     vector<int> twoRepeated(int n, int arr[]) {
//         vector<int> ans;
//         unordered_map<int, int> mp;

//         for (int i = 0; i < n + 2; i++) {
//             mp[arr[i]]++;
//             // Check if this is the second occurrence of arr[i]
//             if (mp[arr[i]] == 2) {
//                 ans.push_back(arr[i]);
//             }
//         }

//         return ans;
//     }
// };




// TC = O(N)  SC = O(1)
// class Solution {
// public:
//     vector<int> twoRepeated(int n, int arr[]) {
//         vector<int> ans;

//         for (int i = 0; i < n + 2; i++) {
//             int index = abs(arr[i]);  // Use absolute value to find the index
            
//             if (arr[index] < 0) {
//                 // If the element at index is already negative, it's a repeat
//                 ans.push_back(index);
//                 if (ans.size() == 2) break;  // Stop once we have two repeated elements
//             } else {
//                 // Mark the element at this index as visited by making it negative
//                 arr[index] = -arr[index];
//             }
//         }

//         return ans;
//     }
// };




// IN CASE n is SMALL


// class Solution {
// public:
//     long long fact(int n) {
//         long long result = 1;
//         for (int i = 1; i <= n; i++) {
//             result *= i;
//         }
//         return result;
//     }

//     vector<int> twoRepeated(int n, int arr[]) {
//         long long S = 0; // Sum of elements in arr[]
//         long long P = 1; // Product of elements in arr[]
//         int x, y;        // Two repeating elements
//         int size = n + 2;
    
//         // Calculate sum and product of all elements in arr[]
//         for (int i = 0; i < size; i++) {
//             S += arr[i];
//             P *= arr[i];
//         }
    
//         // Adjust S and P to represent x + y and x * y
//         S = S - n * (n + 1) / 2; // S is now x + y
//         P = P / fact(n);         // P is now x * y
    
//         // Calculate D, the difference between x and y
//         int D = sqrt(S * S - 4 * P); // D is x - y
    
//         // Solve for x and y
//         x = (D + S) / 2;
//         y = (S - D) / 2;
    
//         vector<int> ans;
//         ans.push_back(x);
//         ans.push_back(y);

//         // Return the result
//         return ans;
//     }
// };
