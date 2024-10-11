// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
//  with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.




    // void sortColors(vector<int>& nums) {
    //     vector<int>arr;
    //     arr = nums;
    //     int n = nums.size();
    //     // Your code here
    //     for(int i = 0; i < n-1; i++){
    //         bool swapped = false;
    //         for(int j = 0; j < n-1-i; j++){
    //             if(arr[j] > arr[j+1]){
    //                 swap(arr[j],arr[j+1]);
    //                 swapped = true;
    //             }
    //         }
    //         if(swapped == false) break;
    //     }
    //     nums = arr;
    // }