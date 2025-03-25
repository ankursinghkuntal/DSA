#include<bits/stdc++.h>
using namespace std;

#define ll                       long long
#define ld                       long double
#define test                     ll t; cin>>t; while(t--)
#define mod                      1000000007
#define pb                       push_back
#define all(v)                   v.begin(),v.end()
#define vec                      vector<ll>
#define inputvec(v1,n)           for(ll i=0; i<n; i++) {ll x; cin >> x; v1.pb(x);}
#define inputvecp(v1, n)         for(ll i=0; i<n; i++) {ll x, y; cin >> x >> y; v1.pb({x,y});}
#define maxele(arr)              *max_element(arr.begin(),arr.end())
#define minele(arr)              *min_element(arr.begin(),arr.end())
#define tolower(s1)              transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)              transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define upperbound(v1, k)        upper_bound(v1.begin(), v1.end(), k) // just greater
#define lowerbound(v1, k)        lower_bound(v1.begin(), v1.end(), k) // equal to or greater  =>(-v1.begin()) to convert it into integer
#define PI                       3.1415926535897932384626433832795l
#define set                      set<ll>
#define map                      map<ll,ll>
#define pv                       for(ll i = 0; i < v.size(); i++) // { cout << v[i].first <<|  |<< v[i].second << endl; }  // print vectorpair
// #define ps                       for(auto it = s.begin(); it!= s.end();++it)  {  cout << (*it) << endl;}   // print set
//#define                       for(auto value : s){ cout << value << endl; } // print set
#define pm                       for(auto it = m1.begin(); it!= m1.end();++it){ cout << (*it).first <<|  |<< (*it).second << endl;}
//#define pm                    for (auto &pr : m1){ cout << pr.first <<|  |<< pr.second << endl;} // print map
#define ASKuntal                 /*Ankur Singh Kuntal*/;
// revsort                       sort(arr, arr+n, greater<ll>());
//  gcd                          __gcd(a,b);
//  lcm                          (a*b)/gcd(a,b)

bool ispalindrome(string str)
{
    for (ll i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
            return false;
    }
    return true;
}

// Function to find max sum of a subarray from a given array using Kadane's algorithm
ll kaiden_algo(ll arr[], ll n)
{
    ll cur_sum = arr[0];
    ll ans = arr[0];
    for (ll i = 1; i < n; i++)
    {
        ll a = arr[i];
        cur_sum = max(cur_sum + a, a);
        ans = max(ans, cur_sum);
    }
    return ans;
}

int fac(int r)
{
    ll ans = 1;
    while (r > 0)
    {
        ans = ans * r;
        r--;
    }
    return ans;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int nextPrime(int n) {
    int next = n + 1;
    
    if (next % 2 == 0) next++;
    
    while (!isPrime(next)) {
        next += 2;
    }
    
    return next;
}

string longestcommonsubsequence(string str1, string str2) {
    int n = str1.size();
    int m = str2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (str1[i-1] == str2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    string lcs = "";
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (str1[i-1] == str2[j-1]) {
            lcs += str1[i-1];
            i--;
            j--;
        } else if (dp[i-1][j] > dp[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }
    
    reverse(lcs.begin(), lcs.end());
    return lcs;
}


ll power(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}



void solve() {
    
    int n, x; cin >> n >> x;
    
    vector<int>arr(n);
    
    int total = 0;
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    	if(arr[i] >= x) total++;
    } 
    sort(arr.begin(), arr.end(), greater<int>());
    int cnt = 0;
    for(int i = total;i < n; i++){
    	cnt++;
    	if(cnt*arr[i] >= x){
    		total++;
    		cnt = 0;
    	}
    }
	
	cout << total << endl;
	
}


int main()
{
    ASKuntal
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    test
    {
        solve();
    }
    // solve();
    return 0;
}
 