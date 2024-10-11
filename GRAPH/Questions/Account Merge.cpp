// Given a list of accounts of size n where each element accounts [ i ] is a list of strings, where the first element account [ i ][ 0 ]  
// is a name, and the rest of the elements are emails representing emails of the account.
// Geek wants you to merge these accounts. Two accounts belong to the same person if there is some common email to both accounts. Note
//  that even if two accounts have the same name, they may belong to different people as people could have the same name. A person can 
//  have any number of accounts initially, but all of their accounts have the same name.
// After merging the accounts, return the accounts in the following format: The first element of each account is the name, and the rest 
// of the elements are emails in sorted order.

// Note: Accounts themselves can be returned in any order.


#include <bits/stdc++.h>
using namespace std;

// Disjoint Set Union (Union-Find) class
class DisJoint {
    vector<int> rank, parent, size;

public:
    DisJoint(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1);
        size.resize(n+1, 1);

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUltimateParent(int node) {
        if (node == parent[node]) {
            return node;
        }
        return parent[node] = findUltimateParent(parent[node]);
    }

    void UnionByRank(int u, int v) {
        int ult_parent_u = findUltimateParent(u);
        int ult_parent_v = findUltimateParent(v);
        if (ult_parent_u == ult_parent_v) return;

        if (rank[ult_parent_u] > rank[ult_parent_v]) {
            parent[ult_parent_v] = ult_parent_u;
        } else if (rank[ult_parent_u] < rank[ult_parent_v]) {
            parent[ult_parent_u] = ult_parent_v;
        } else {
            parent[ult_parent_v] = ult_parent_u;
            rank[ult_parent_u]++;
        }
    }

    void UnionBySize(int u, int v) {
        int ult_parent_u = findUltimateParent(u);
        int ult_parent_v = findUltimateParent(v);
        if (ult_parent_u == ult_parent_v) return;

        if (size[ult_parent_u] >= size[ult_parent_v]) {
            parent[ult_parent_v] = ult_parent_u;
            size[ult_parent_u] += size[ult_parent_v];
        } else {
            parent[ult_parent_u] = ult_parent_v;
            size[ult_parent_v] += size[ult_parent_u];
        }
    }
};

// Solution class for merging accounts
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        int n = accounts.size();
        DisJoint ds(n);
        unordered_map<string, int> mailNode;

        // Step 1: Union emails based on commonality
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                string mail = accounts[i][j];
                if (mailNode.find(mail) != mailNode.end()) {
                    ds.UnionBySize(i, mailNode[mail]);
                } else {
                    mailNode[mail] = i;
                }
            }
        }

        // Step 2: Group emails by their ultimate parent
        vector<string> mergeMail[n];
        for (auto &it : mailNode) {
            string mail = it.first;
            int node = ds.findUltimateParent(it.second);
            mergeMail[node].push_back(mail);
        }

        // Step 3: Build the final result
        vector<vector<string>> ans;
        for (int i = 0; i < n; i++) {
            if (mergeMail[i].empty()) continue;

            sort(mergeMail[i].begin(), mergeMail[i].end()); // Sort emails

            vector<string> temp;
            temp.push_back(accounts[i][0]); // Add the name
            for (const auto &mail : mergeMail[i]) {
                temp.push_back(mail);
            }
            ans.push_back(temp);
        }

        // Step 4: Sort the result by the account name (first string)
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Main function
int main() {
    // Input: account details (name and emails)
    vector<vector<string>> accounts = {
        {"John", "johnsmith@mail.com", "john00@mail.com"},
        {"John", "johnnybravo@mail.com"},
        {"John", "johnsmith@mail.com", "john_newyork@mail.com"},
        {"Mary", "mary@mail.com"}
    };

    // Create solution instance
    Solution solution;

    // Merge accounts and get result
    vector<vector<string>> mergedAccounts = solution.accountsMerge(accounts);

    // Output the merged accounts
    for (const auto &account : mergedAccounts) {
        for (const auto &detail : account) {
            cout << detail << " ";
        }
        cout << endl;
    }

    return 0;
}
