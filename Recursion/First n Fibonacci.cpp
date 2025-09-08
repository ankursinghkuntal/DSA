// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    
    int fibbo(int n, vector<int>&ans){
        if(n <= 1) return n;
        if(ans[n] != -1) return ans[n];
        return ans[n] = fibbo(n-1, ans) + fibbo(n-2, ans);
    }
    
    vector<int> fibonacciNumbers(int n) {
        // code here
        
        vector<int>ans(n, -1);
        ans[0] = 0;
        if(n == 1) return ans;
        
        ans[1] = 1;
        if(n == 2) return ans;
        
        fibbo(n-1, ans);
        return ans;
        
    }
};