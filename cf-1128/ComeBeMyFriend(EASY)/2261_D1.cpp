#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	ll n{}, m{}; cin >> n >> m;
	ll k{ceil(float(n)/2)};
		if (n==1)
	{
		cout << 0 << '\n'; return;
	}
	cout << k << '\n';
	if (n%2)
	{ 
		for (ll i{1}; i+k<=n+1; i++)
		{
			cout << i << ' ' << i+k-1 << '\n';
		}
	}
	else
	{
		for (ll i{1}; i+k<=n; i++)
		{
			cout << i << ' ' << i+k-1 << '\n';
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
}