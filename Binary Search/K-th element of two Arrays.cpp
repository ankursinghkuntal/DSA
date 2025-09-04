class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
      int n = a.size();
      int m = b.size();

      int cnt = 0;
      int i = 0, j = 0;

      while(i < n && j < m){
        if(a[i] <= b[j]){
          cnt++;
          if(cnt == k) return a[i];
          i++;
        }else{
          cnt++;
          if(cnt == k) return b[j];
          j++;
        }
      }

      while(i < n){
        cnt++;
        if(cnt == k) return a[i];
        i++;        
      }

      while(j < m){
        cnt++;
        if(cnt == k) return b[j];
        j++;        
      }

  }
};