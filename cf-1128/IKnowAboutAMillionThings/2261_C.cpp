#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	ll n{}; cin >> n;
	ll w{n};
	ll odd{}, even{};
	while (w--)
	{
		ll x{}; cin >> x;
		if (x%2==1) odd++;
		else
			even++;
	}
	if (n==2)
	{
		if (odd==1 && even == 1)
		{
			cout << "Larpity\n";
		}
		else
		{
			cout << "Moggity\n";
		}
	}
	else if (n==3)
	{
		if (odd==3)
		{
			cout << "Larpity\n";
		}
		else
		{
			cout << "Moggity\n";
		}
	}
	else
	{
		cout << "Moggity\n";
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
}