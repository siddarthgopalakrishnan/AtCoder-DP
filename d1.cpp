// Knapsack 1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define times(t) int t; cin >> t; while(t--)
#define mod 1000000007

const int mxW = 1e5+5;
ll dp[mxW];
int N, W;

void solve() {
	cin >> N >> W;
	for(int i=0; i<N; i++) {
		int w, v; cin >> w >> v;
		for(int j = W; j>=w; j--)
			dp[j] = max(dp[j-w] + v, dp[j]);
	}
	// for(int i=0; i<=W; i++) cout << dp[i] << ' ';
	// cout << endl;
	ll ans = 0;
	for(int i=0; i<=W; i++) ans = max(ans, dp[i]);
	cout << ans << endl;
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