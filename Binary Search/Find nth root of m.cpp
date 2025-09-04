class Solution {
  public:
    int nthRoot(int n, int m) {
        
        int low = 1, high = m;
        
        int ans = m;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            int val = pow(mid, n);
            if(val == m) return mid;
            else if(val < m){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        
        return pow(ans,n) == m ? ans : -1;
    }
};