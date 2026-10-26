#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mex(vector<int>& v)
{
	set<int> b(v.begin(), v.end());
	int result{};
	while (b.count(result))
		result++;
	return result;
}

void solve() {
	int n{}, k{}; cin >> n >> k;
	vector<int> v(n); for (auto& i : v) cin >> i;
	map<int, int> m;
	for (auto i : v)
		m[i]++;
	// for (auto i : m)
	// cout << i.first << ' ' << i.second << '\n';
	vector<int> ans{};
	int bal{};
	for (auto i : m)
	{
		if (i.second >= k)
		{
			bal += (i.second-k);
			ans.push_back(i.first);
		}
		else
		{
			if (i.second + bal >= k)
			{
				bal = bal - (k-1);
				i.second -= 1;
				bal += i.second;
				ans.push_back(i.first);
			}
			else
			{
				bal += i.second;
			}
		}
	}
	cout << mex(ans) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
}
