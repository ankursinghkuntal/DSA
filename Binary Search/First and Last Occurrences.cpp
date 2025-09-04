class Solution {
public:
    int first_occurrence(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                ans = mid;
                high = mid - 1;  
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int last_occurrence(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                ans = mid;
                low = mid + 1; 
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> find(vector<int>& arr, int x) {
        int first = first_occurrence(arr, x);
        int last = last_occurrence(arr, x);
        return {first, last};
    }
};
