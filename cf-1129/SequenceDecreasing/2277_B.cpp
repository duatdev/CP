#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	ll n{}; cin >> n;
	vector<ll> v(n); for (auto& i : v) cin >> i;
	//for (auto i : v) cout << i << ' ';
	sort(v.begin(), v.end());
	if (*v.begin()>=n)
	{
		cout << 0 << '\n';
	}
	else
	{
		cout << n << '\n';
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
}
