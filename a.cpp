// Frog 1
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
	int n; cin >> n;
	vector<int> arr(n);
	for(auto &x : arr) cin >> x;
	vector<int> dp(n, 0);
	dp[1] = abs(arr[1] - arr[0]);
	if(n <= 1) cout << dp[n] << endl;
	for(int i=2; i<n; i++) {
		dp[i] = min(abs(arr[i-1]-arr[i])+dp[i-1], abs(arr[i-2]-arr[i])+dp[i-2]);
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