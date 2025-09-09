class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        
        int n = arr.size();
        
        unordered_set<int>st;
        
        for(int i = 0; i < n; i++) st.insert(arr[i]);
        
        int cnt = 0;
        
        for(int it : st){
            if(st.find(it-1) == st.end()){
                int val = it;
                int tempCnt = 0;
                
                while(st.find(val) != st.end()){
                    tempCnt++;
                    val++;
                }
                
                cnt = max(cnt, tempCnt);
                
            }
        }
        
        return cnt;
        
    }
};