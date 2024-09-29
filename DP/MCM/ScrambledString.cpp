    // unordered_map<string,bool>mp;
    
    // // 1.Recursive
    // bool Rec(const string &a, const string &b) {
    //     if (a.length() != b.length()) return false;  // Different lengths, can't be scrambled
    //     if(a.length() == 0 && b.length() == 0) return true;
    //     if (a == b) return true;
    
    //     int n = a.length();
    
    // bool flag = false;
    //     for (int i = 1; i < n; i++) {
    //         // Check swap case
    //         if (Rec(a.substr(0, i), b.substr(n - i, i)) && Rec(a.substr(i, n - i), b.substr(0, n - i))) {
    //             flag = true;
    //             break;
    //         }
    //         // Check no swap case
    //         if (Rec(a.substr(0, i), b.substr(0, i)) && Rec(a.substr(i, n - i), b.substr(i, n - i))) {
    //             flag = true;
    //             break;
    //         }
    //     }
    //     return  flag;  // No valid scrambled version found
    // }
    
    // // 2.Memoised

    // bool Memo(const string &a, const string &b) {
    //     if (a.length() != b.length()) return false;
    //     if(a.length() == 0 && b.length() == 0) return true;
    //     if (a == b) return true;
        
    //     string key = a + ' ' + b;
    //     if (mp.find(key) != mp.end()) return mp[key];
    
    //     int n = a.length();
    //     bool flag = false;
    
    //     for (int i = 1; i < n; i++) {
    //         if (Memo(a.substr(0, i), b.substr(n - i, i)) && Memo(a.substr(i, n - i), b.substr(0, n - i))) {
    //             flag = true;
    //             break;
    //         }
    //         if (Memo(a.substr(0, i), b.substr(0, i)) && Memo(a.substr(i, n - i), b.substr(i, n - i))) {
    //             flag = true;
    //             break;
    //         }
    //     }
    
    //     return mp[key] = flag;
    // }
