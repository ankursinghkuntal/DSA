class Solution {
  public:
    bool checkPangram(string& s) {
        vector<int> arr(26, 0);

        for (char c : s) {
            if (isalpha(c)) {
                arr[tolower(c) - 'a'] = 1;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) return false;
        }

        return true;
    }
};
