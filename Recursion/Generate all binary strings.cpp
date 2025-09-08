// User function Template for C++

class Solution {
public:

    void generate(vector<string>& ans, int idx, int n, string temp){
        if(idx == n){
            ans.push_back(temp);
            return;
        }

        generate(ans, idx+1, n, temp+"0");
        if( temp.size() == 0 ||  temp[temp.size()-1] == '0' ) generate(ans, idx+1, n, temp+"1");

    }

    vector<string> generateBinaryStrings(int n) {
        vector<string>ans;
        generate(ans, 0, n, "");

        return ans;
    }
    
};
