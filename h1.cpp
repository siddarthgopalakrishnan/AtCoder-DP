// Grid 1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define times(t) int t; cin >> t; while(t--)
#define mod 1000000007

int h, w;
char arr[1003][1003];
int dp[1003][1003], vis[1003][1003];

int dfs(int r, int c) {
	if(r>=h or c>=w) return 0;
	if(arr[r][c] == '#') return 0;
	if(vis[r][c]) return dp[r][c];
	if(r==h-1 and c==w-1) return 1;
	vis[r][c] = 1;
	return dp[r][c] = (dfs(r+1, c) + dfs(r, c+1))%mod;
}

void solve() {
	cin >> h >> w;
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			cin >> arr[i][j];
		}
	}
	cout << dfs(0, 0) << endl;
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