class Solution {
public:
    void recurpermute(int ind, vector<int>&nums, vector<vector<int>>&ans){
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j = ind; j < nums.size(); j++){
            swap(nums[j], nums[ind]);
            recurpermute(ind+1, nums, ans);
            swap(nums[j], nums[ind]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        recurpermute(0,nums,ans);
        return ans;
    }
};