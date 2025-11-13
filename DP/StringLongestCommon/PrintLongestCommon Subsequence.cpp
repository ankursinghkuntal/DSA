
vector<vector<int>>tab(string &s1, string &s2, int n, int m){
	vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

	for(int i = 0; i < n+1; i++) dp[i][0] = 0;
	for(int j = 0; j < m+1; j++) dp[0][j] = 0;

	for(int i = 1; i < n+1; i++){
		for(int j = 1; j < m+1; j++){

			if(s1[i-1] == s2[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}

		}
	}

	return dp;
}

string LCS(string &s1, string &s2, int n, int m, vector<vector<int>>& dp){

	string str = "";

	while(n > 0 && m > 0){

		if(s1[n-1] == s2[m-1]){
			str += s1[n-1];
			n--; 
			m--;
		}else{
			if(dp[n][m-1] >= dp[n-1][m]){
				m--;
			}
			else{
				n--;
			}
		}

	}

	return str;

}

string findLCS(int n, int m,string &s1, string &s2){
	// Write your code here.

	vector<vector<int>>dp = tab(s1, s2, n, m);
	
	return LCS(s1, s2, n, m, dp);

}