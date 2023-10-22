#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 500 + 5;
int n, k, t;
int dp[N][N], a[N];
bool mark[N][N];

int f(int i, int k)
{
	if(i > n) return k == 0 ? 0 : -1e9;
    if(k == 0) return 0;
	if(mark[i][k]) return dp[i][k];
	mark[i][k] = 1;
	dp[i][k] = f(i + 1, k);
	int height = 1e9;
	for(int x = 1; x <= t; x++)
	{
		height = min(height, a[i + x - 1]);
		dp[i][k] = max(dp[i][k], f(i + x, k - 1) + height * x);
	}
	return dp[i][k];
}

void solve()
{
	cin >> n >> k >> t;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
	memset(mark, 0, sizeof mark);
	cout << f(1, k);
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
}
    
