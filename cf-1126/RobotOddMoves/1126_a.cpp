#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = 1e9;

void solve() {
	vector<vector<ll>> dp(1002, vector<ll>(1002, INF));
	ll w{}, v{};
	cin >> w >> v;
	dp[0][0] = 0;
	for (ll x{}; x<=1000; x++)
	{
		for (ll y{}; y<=1000; y++)
		{
			if (y>x+1)
			{
				continue;
			}
			if (x%2 == y%2)
			{
				if (y>x)
				{
					break;
				}
				if (y<=x && y >=0)
				{ // upward
					dp[x][y+1] = min(dp[x][y]+1, dp[x][y+1]);
					dp[x+1][y+1] = min(dp[x][y+1], dp[x+1][y+1]);
				}
				if (y>0)
				{ // downward
					dp[x][y-1] = min(dp[x][y]+1, dp[x][y-1]);
					dp[x+1][y-1] = min(dp[x][y-1], dp[x+1][y-1]);
				}
			}
		}
	}
	if (dp[w][v] == INF)
	{
		cout << -1 << '\n';
		return;
	}
	else
	{
		cout << dp[w][v] << '\n';
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
}