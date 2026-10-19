#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	ll n{}; cin >> n;
	string s{}; cin >> s;
	ll a{-1}, b{-1};
	ll lz{-1};
	bool flag{false};
	bool flag2{false};
	ll cnt{};
	for (ll i{}; i<n; i++)
	{
		if (s[i]=='1')
		{
			if (a==-1)
			{
				a = i;
				flag = true;
			}
			b = i;
			cnt++;
		}
	}
	auto target{s.end()};
	for (auto it{s.begin()}; it!=s.end(); it++)
	{
		if (*it == '1' && flag2 == false)
		{
			flag2 = true;
		}
		else if (*it == '1')
		{
			target = prev(it);
			break;
		}
	}
	
	if (target != s.end() && cnt==2)
	{
		cout << b-distance(s.begin(), target) << '\n';
	}
	else
		cout << b-a << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
}