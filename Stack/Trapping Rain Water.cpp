vclass Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        // 1.
        
        
        // vector<int>pre(n, 0);
        // vector<int>suf(n, 0);
        
        // pre[0] = arr[0];
        // suf[n-1] = arr[n-1];
        
        // for(int i = 1; i < n; i++){
        //     pre[i] = max(pre[i-1], arr[i]);
        // }
        
        // for(int i = n-2; i >= 0; i--){
        //     suf[i] = max(suf[i+1], arr[i]);
        // }
        
        // int ans = 0;
        
        // for(int i = 0; i < n; i++){
        //     ans += min(pre[i], suf[i]) - arr[i];
        // }
        
        // return ans;
        
        
        
        
        
        
        // 2.
        
        int mxIdx = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[mxIdx]) mxIdx = i;
        }
        
        int ans = 0;
        
        int left = 0;
        for(int i = 0; i < mxIdx; i++){
            left = max(left, arr[i]);
            ans += left - arr[i];
        }
        
        int right = 0;
        for(int i = n-1; i > mxIdx; i--){
            right = max(right, arr[i]);
            ans += right - arr[i];
        }
        
        return ans;
    }
    
};