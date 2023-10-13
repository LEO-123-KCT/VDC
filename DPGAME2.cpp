#pragma GCC optimize(3)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, k, res;
int a[100001], dp[100001];

void maximize(int &a, int b)
{
    if(b > a) a = b;
}

signed main()
{
    cin >> n >> k;
    for(int i(1); i <= n; i++) cin >> a[i];

    dp[0] = res = 0;
    for(int i(1); i <= n; i++)
    {
        dp[i] = -1e17;

        for(int j(max(0LL, i - k)); j < i; j++)
            maximize(dp[i], a[i] + dp[j]);

        maximize(res, dp[i]);
    }

    cout << res;
}
    
