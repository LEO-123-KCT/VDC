#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 5000 + 5;

ll dp[N][N];
ll a[N], b[N];
int n, m;

ll f(int i, int j)
{
    if(i > n) return 0;
    if(j > m) return 1e15;
    ll &res = dp[i][j];
    if(~res) return res;
    res = f(i + 1, j + 1) + abs(a[i] - b[j]);
    return res = min(res, f(i, j + 1));
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];

    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + m);
    memset(dp, -1, sizeof dp);
    cout << f(1, 1);
    return 0;
}
    
