

class Solution {
public:

    bool isFeasible(vector<int>&arr, int mid, int k){
        int cnt = 0;
        
        for(int i = 0; i < arr.size(); i++){
            cnt += (arr[i]+mid-1)/mid;
            if(cnt > k) return false;
        }
        
        return cnt <= k;
    }

    int kokoEat(vector<int>& arr, int k) {
        
        int low = 1, high = 0;
        
        int n = arr.size();
        
        for(int i = 0; i < n; i++){
            high = max(high, arr[i]);
        }
        
        int ans = 0;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            
            if(isFeasible(arr, mid, k)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
            
        }
        
        return ans;
    }
    
};