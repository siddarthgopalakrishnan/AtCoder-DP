// Vacation
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
	int arr[n][3], dp[n+1][3];
	for(int i=0; i<n; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
	dp[0][0] = arr[0][0];
	dp[0][1] = arr[0][1];
	dp[0][2] = arr[0][2];
	for(int i=1; i<=n; i++) {
		dp[i][0] = arr[i][0] + max(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = arr[i][1] + max(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = arr[i][2] + max(dp[i-1][1], dp[i-1][0]);
	}
	cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]}) << endl;
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