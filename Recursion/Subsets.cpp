class Solution {
public:
    // Static compare function for sorting
    static bool compare(const vector<int>& a, const vector<int>& b) {
        int n = a.size(), m = b.size();
        for (int i = 0; i < min(n, m); i++) {
            if (a[i] != b[i])
                return a[i] < b[i];
        }
        return n < m; // shorter vector comes first if prefixes are equal
    }

    void recur(vector<vector<int>>& ans, vector<int>& temp, vector<int>& nums, int val) {
        if (val == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // take
        temp.push_back(nums[val]);
        recur(ans, temp, nums, val + 1);

        // not take
        temp.pop_back();
        recur(ans, temp, nums, val + 1);
    }

    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(arr.begin(), arr.end()); // Optional: ensure consistent order
        recur(ans, temp, arr, 0);
        sort(ans.begin(), ans.end(), compare);
        return ans;
    }
};