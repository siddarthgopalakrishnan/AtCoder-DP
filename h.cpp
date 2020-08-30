// Grid 1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define times(t) int t; cin >> t; while(t--)
#define mod 1000000007

void solve() {
	int h, w;
	cin >> h >> w;
	char arr[h][w];
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			cin >> arr[i][j];
		}
	}
	vector<vector<int>> dp(h, vector<int>(w));
	dp[0][0] = 1;
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			for(int r : {i, i+1}) {
				int c = j;
				if(r == i) {
					c = j+1;
				}
				if(r<h and c<w and arr[r][c] == '.') {
					dp[r][c] = (dp[r][c] + dp[i][j])%mod;
				}
			}
		}
	}
	cout << dp[h-1][w-1] << endl;
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