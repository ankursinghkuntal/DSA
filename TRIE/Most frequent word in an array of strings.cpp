// Simple Approach


// class Solution
// {
// public:
//     //Function to find the most frequent word in an array of strings.
//     string mostFrequentWord(string arr[], int n) 
//     {
//         unordered_map<string, int> freq;
//         unordered_map<string, int> firstOccurrence;
//         for (int i = 0; i < n; i++) {
//             freq[arr[i]]++;
//             if (firstOccurrence.find(arr[i]) == firstOccurrence.end()) {
//                 firstOccurrence[arr[i]] = i; // Record the first occurrence
//             }
//         }
        
//         int maxFreq = 0;
//         string result;
//         for (int i = 0; i < n; i++) {
//             if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && firstOccurrence[arr[i]] > firstOccurrence[result])) {
//                 maxFreq = freq[arr[i]];
//                 result = arr[i];
//             }
//         }
        
//         return result;
//     }
// };  