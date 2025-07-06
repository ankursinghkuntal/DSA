class Solution {
public:
    void recur(vector<vector<int>>&ans, vector<int>&temp, vector<int>&nums, int val){
        if(val == nums.size()){
            ans.push_back(temp);
            return;
        }

        //  take
        temp.push_back(nums[val]);
        recur(ans, temp, nums, val+1);

        // not take
        temp.pop_back();
        recur(ans, temp, nums, val+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        recur(ans, temp, nums, 0);
        return ans;
    }
};