#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 100 + 5;
#define int long long
int n;
int a[N];
int dp[N][N];
bool mark[N][N];

int f(int l, int r)
{
    if(l > r) return 0;
    if(mark[l][r]) return dp[l][r];
    mark[l][r] = 1;
    dp[l][r] = -1e15;
    int sum = 0;
    for(int i = l; i <= r; i++)
    {
        sum += a[i];
        dp[l][r] = max(dp[l][r], sum - f(i + 1, r));
    }
    sum = 0;
    for(int i = r; i >= l; i--)
    {
        sum += a[i];
        dp[l][r] = max(dp[l][r], sum - f(l, i - 1));
    }
    return dp[l][r];
}

void solve()
{
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    memset(mark, 0, sizeof mark);
    cout << f(1, n) << '\n';
}

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while(cin >> n && n != 0) solve();
	return 0;
}
    
