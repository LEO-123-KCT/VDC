#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100 + 5;
int n;
int a[N];
ll dp[N][N];

int get_sum(int l, int r)
{
	return (a[r] - a[l - 1] + 100) % 100;
}

ll f(int l , int r)
{
	if(l >= r) return 0;
	ll &res = dp[l][r];
	if(~res) return res;
	res = 1e15;
	for(int i = l; i <= r - 1; i++)
		res = min(res, f(l, i) + f(i + 1, r) + get_sum(l, i) * get_sum(i + 1, r));
	return res;
}

void solve()
{
	for(int i = 1; i <= n; i++)
		cin >> a[i], a[i] = (a[i - 1] + a[i]) % 100;
	memset(dp, -1, sizeof dp);
	cout << f(1, n) << '\n';
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int t = 1;
	// cin >> t;
	while(cin >> n) solve();
}
    
