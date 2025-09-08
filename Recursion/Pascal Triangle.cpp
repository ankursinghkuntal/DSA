class Solution {
  public:
    
    
    
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int>ans;
        ans.push_back(1);
        if(n == 1) return ans;
        ans.push_back(1);
        if(n == 2) return ans;
        
        n -= 2;
        while(n--){
            vector<int>temp;
            temp.push_back(1);
            for(int i = 0; i < ans.size()-1; i++){
                temp.push_back(ans[i]+ans[i+1]);
            }
            temp.push_back(1);
            ans = temp;
        }
        
        return ans;

        
    }
};
