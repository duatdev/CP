#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll hbit(ll x)
{
	for (ll i{31}; i>=0; i--)
	{
		if ((x>>i) & 1) return  i;
	}
	return -1;
}

void solve() {
	ll n{}; cin >> n;
	ll mint{LLONG_MAX}, maxt{-1};
	while(n--)
	{
		ll x{}; cin >> x;
		mint = min(x, mint);
		maxt = max(x, maxt);
	}
	ll a{hbit(maxt)+1};
	ll b{hbit(mint)+1};
	ll ans{maxt};
	if (a==b)
	{ // equals (case 1)
		ll k{};
		for (ll i{a-1}; i>=0; i--)
		{
			if ((mint >> i) ^ (maxt >> i))
			{
				ans = maxt | ((1<<i)-1);
				break;
			}
		}
	}
	else // lesesr (normal)
	{
		ans = maxt | ((1<<a)-1);
	}
	cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
}