class Solution {
  public:
   
   static bool myCompare(pair<int, int>a,  pair<int, int>b){
       if(a.second == b.second){
           return a.first > b.first;
       }
       return a.second > b.second;
   }
  
    vector<int> topKFrequent(vector<int> &arr, int k) {
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());     // we can use map for storing the count
        
        vector<pair<int, int>>vp;
        
        int cnt = 1;
        
        for(int i = 0; i < n-1; i++){
            if(arr[i] == arr[i+1]){
                cnt++;
            }else{
                vp.push_back({arr[i], cnt});
                cnt = 1;
            }
        }
        vp.push_back({arr[n-1], cnt});
        
        
        sort(vp.begin(), vp.end(), myCompare);
        
        vector<int>ans;
        
        for(int i = 0; i < k; i++){
            ans.push_back(vp[i].first);
        }
        
        return ans;
    }
};


// 2.  Approach is using the priority queue  and map