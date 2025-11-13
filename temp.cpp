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
// #define set                      set<ll>
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

// ll power(ll base, ll exp) {
    // ll result = 1;
    // while (exp > 0) {
        // if (exp % 2 == 1)
            // result = (result * base) % mod;
        // base = (base * base) % mod;
        // exp /= 2;
    // }
    // return result;
// }





ll long_gcd(ll num1, ll num2){
    while(num2 != 0){
        ll temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}



map memo;

// Mex function: minimum excluded value
int mex(set<int>& st) {
    for (int i = 0;; i++) {
        if (st.find(i) == st.end()) {
            return i;
        }
    }
}

// Grundy number function with memoization
int grundy(int num, vector<int>& pick) {
    if (num == 0) return 0;
    if (memo.count(num)) return memo[num];

    set<int> st;
    for (int move : pick) {
        if (num >= move) {
            st.insert(grundy(num - move, pick));
        }
    }

    return memo[num] = mex(st);
}

int minSwap_to_sort(vector<int>&arr){
	int n = arr.size();
	
	vector<pair<int, int>>vp;
	for(int i = 0; i < n; i++){
		vp.push_back({arr[i], i});
	}
	
	sort(vp.begin(), vp.end());
	
	int i = 0;
	int cnt = 0;
	
	while(i < n){
		while(arr[i] != vp[i].first){
			swap(vp[i], vp[vp[i].second]);
			cnt++;
		}
		i++;
	}
	return cnt;
}

bool isValid(int row, int col, int n){
	return row < n && row >= 0 && col < n && col >= 0;
}

const int LIMIT = 1e7; 
vector<int> primes;

void precompute_primes() {
    vector<bool> is_prime(LIMIT + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= LIMIT; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= LIMIT; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= LIMIT; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
}

bool isValid(int n, int i){
	return i < n && i >= 0;
}


void solve() {
	
	int n, sum;
	cin >> n >> sum;
	
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> dp(sum + 1, 0);
    dp[0] = 1; // 1 way to make sum 0 (take nothing)

    for (int j = 1; j <= sum; j++) {     // loop over all sums
        for (int i = 0; i < n; i++) {    // try all numbers
            if (j >= arr[i])
                dp[j] += dp[j - arr[i]];
        }
    }

    cout << dp[sum] << endl;
  	
}


int main()
{
    ASKuntal
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    // precompute_primes();
    
    // test
    // {
//     	
        // solve();
    // }
    solve();
    return 0;
}
 