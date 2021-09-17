#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll P2LIM = (ll)2e18;

int solve(string s, string t)
{
	int tp = 0;
	int sp = 0;
	int taken = 0;

	while (sp < s.length() && tp < t.length())
	{
		if(s[sp] == t[tp])
		{
			taken++;
			tp++;
		}
		sp++;
	}

	return (int)s.length() - taken + (int)t.length() - taken;
}

vector<string> ts;

int main()
{
	for (ll p2 = 1; p2 <= P2LIM; p2 *= 2)
		ts.push_back(to_string(p2));

	int t;
	cin >> t;

	while (t--)
	{
		string n;
		cin >> n;

		int ans = n.length() + 1;
		for (auto p2 : ts)
			ans = min(ans, solve(n, p2));
		cout << ans << '\n';
	}

	return 0;
}