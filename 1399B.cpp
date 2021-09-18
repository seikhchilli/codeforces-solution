#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
    int n;
		cin >> n;
    int a[n], b[n];
		int mina = 0x3f3f3f3f, minb = 0x3f3f3f3f;
		long long ans = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			mina = min(mina, a[i]);
		}
		for(int i = 1; i <= n; i++)
		{
			cin >> b[i];
			minb = min(minb, b[i]);
		}
		for(int i = 1; i <= n; i++)
		{
			ans += 1ll * max(a[i] - mina, b[i] - minb);
		}
		cout << ans << endl;
	}
	return 0;
}
