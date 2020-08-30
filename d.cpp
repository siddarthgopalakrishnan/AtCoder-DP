// Knapsack 1
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
	int n, W; cin >> n >> W;
	ll dp[n+1][W+1];
	int wev[n][2];
	for(int i=0; i<n; i++) {
		cin >> wev[i][0] >> wev[i][1];
	}
	memset(dp, -1, sizeof(dp));
	for(int i=0; i<=n; i++) dp[i][0] = 0;
	for(int i=0; i<=W; i++) dp[0][i] = 0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=W; j++) {
			if(wev[i-1][0] <= j) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-wev[i-1][0]] + wev[i-1][1]);
			}
			else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	// for(int i=0; i<=n; i++) {
	// 	for(int j=0; j<=W; j++) {
	// 		cout << dp[i][j] << ' ';
	// 	}
	// 	cout << endl;
	// }
	cout << dp[n][W] << endl;
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