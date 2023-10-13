#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define For(i, a, b, step) for (int i(a); i <= b; i += step)
#define For_down(i, a, b, step) for (int i(a); i >= b; i -= step)
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define space(n) n << ' '
#define endl(n) n << '\n'

int dp[100001], a[100001];
signed main()
{
    FastIO;
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        dp[n] = 1;
        For(i, 1, n, 1) cin >> a[i], a[i] = (a[i] >= 0 ? 1 : -1);

        For_down(i, n - 1, 1, 1)
        {
            if(a[i] == -a[i+1])
                dp[i] = dp[i+1] + 1;
            else
                dp[i] = 1;
        }

        For(i, 1, n, 1) cout << space(dp[i]);
        cout << '\n';
    }
    return 0;
}
    
