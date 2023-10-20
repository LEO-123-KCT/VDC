#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 2000 + 5;

ll dp[N][N];
ll a[N];
int n;

ll f(int l, int r)
{
    if(l > r) return 0;
    ll cnt = l - 1 + n - r;
    ll &res = dp[l][r];
    if(~res) return res;
    res = 0;
    return res = max(f(l + 1, r) + a[l] * (cnt + 1), f(l, r - 1) + a[r] * (cnt + 1));
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    memset(dp, -1, sizeof dp);
    cout << f(1, n);
    return 0;
}
    
