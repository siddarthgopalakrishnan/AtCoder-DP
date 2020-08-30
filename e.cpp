// Knapsack 2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define times(t) int t; cin >> t; while(t--)
#define mod 1000000007
#define pb push_back
#define mp make_pair

const int MAXV = 1e5 + 10;
const int MAXN = 1e3 + 10;
const ll INF = 1e13;

ll dp[MAXV];
int N, W, V, wi[MAXN], vi[MAXN];

void solve() {
	cin >> N >> W;
	for(int i=1; i<=N; i++) {
		cin >> wi[i] >> vi[i];
		V += vi[i];
	}
	for(int i=1; i<=V; i++) dp[i] = INF;
	dp[0]=0;
	for(int item=1; item<=N; item++) {
		int w=wi[item], v=vi[item];
		for(int i=V; i>=v; i--) {
			dp[i] = min(dp[i], dp[i-v]+w);
		}
	}
	for(int i=V; i>=0; i--) {
		if(dp[i] <= W) {
			cout << i << endl;
			break;
		}
	}
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