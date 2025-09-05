class Solution {
  public:
  
    void Collision(vector<int>&asteroids, int n, vector<int>& ans){
        
        stack<int>st;
        
        for(int i = 0; i < n; i++){
            
            bool explode = false;
            
            while(!st.empty() && st.top() > 0 && asteroids[i] < 0){
                if(abs(asteroids[i]) < st.top()){
                    explode = true;
                    break;
                }else if(abs(asteroids[i]) == st.top()){
                    explode = true;
                    st.pop();
                    break;
                }else{
                    st.pop();
                }
            }
            
            if(!explode){
                st.push(asteroids[i]);
            }
            
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
    }
    
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        
        int n = asteroids.size();
        
        vector<int>ans;
        
        Collision(asteroids, n, ans);
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};
