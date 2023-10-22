#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1000 + 5;
int dp[N][N];
bool mark[N][N];
int n, a[55], L;

int f(int l, int r)
{
    if(l >= r) return 0;
    if(mark[l][r]) return dp[l][r];
    mark[l][r] = 1;
    dp[l][r] = 1e9;
    bool exist = 0;
    for(int i = 1; i <= n; i++)
        if(l <= a[i] && a[i] < r) 
            dp[l][r] = min(dp[l][r], f(l, a[i]) + f(a[i] + 1, r) + (r - l + 1)),
            exist = 1;
    if(!exist) dp[l][r] = 0;
    return dp[l][r];
}

void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    memset(mark, 0, sizeof mark);
    cout << f(1, L) << '\n';
}

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while(cin >> L && L != 0) solve();
	return 0;
}
    
