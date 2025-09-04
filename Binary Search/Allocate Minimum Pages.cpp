
class Solution {
  public:
  
    int n;
  
    bool isFeasible(vector<int>& arr, int mid, int k){
        int cnt = 1;
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            if(sum+arr[i] > mid){
                cnt++;
                sum = arr[i];
            }else{
                sum += arr[i];
            }
        }
        
        return cnt <= k;
    }

    int findPages(vector<int> &arr, int k) {
        
        n = arr.size();
        
        if(n < k) return -1;
        
        int mx = *max_element(arr.begin(), arr.end());
        
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        
        int low = mx, high = sum;
        
        int ans = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
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

