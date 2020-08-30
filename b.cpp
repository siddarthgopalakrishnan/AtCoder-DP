// Frog 2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define times(t) int t; cin >> t; while(t--)
#define mod 1000000007
#define pb push_back
#define mp make_pair

void solve() {
	int n, k; cin >> n >> k;
	vector<int> arr(n);
	for(auto &x : arr) cin >> x;
	vector<int> dp(n+1, INT_MAX);
	dp[0] = 0;
	for(int i=0; i<=n; i++) {
		int j = 1;
		while(j<=k && j<=n) {
			dp[i+j] = min(dp[i+j], dp[i]+abs(arr[i+j]-arr[i]));
			++j;
		}
	}
	// for(auto i : dp) cout << i << ' ';
	// cout << endl;
	cout << dp[n-1] << endl;
	return;
}

int main() {
	IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("C:/Gen code/CompProg/input.txt", "r", stdin);
	// freopen("C:/Gen code/CompProg/output.txt", "w", stdout);
	// #endif
	solve();
	return 0;
}