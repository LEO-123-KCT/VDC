#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200 + 5;
int n, dp[N];
char ch;
int a[N];

void solve()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> ch, a[i] = (ch == '1' ? 1 : -1);
	for(int i = 1; i <= n; i++)
		a[i] += a[i - 1];
	for(int i = 1; i <= n; i++)
	{
		dp[i] = dp[i - 1];
		for(int j = 1; j <= i; j++)
			if(a[i] - a[j - 1] > 0) dp[i] = max(dp[i], dp[j - 1] + (i - j + 1));
	}
	cout << dp[n] << '\n';
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
}
    
