#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define For(i, a, b, step) for (int i(a); i <= b; i += step)
#define For_down(i, a, b, step) for (int i(a); i >= b; i -= step)
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define space(n) n << ' '
#define endl(n) n << '\n'

int used[1000001], a[100001], dp[100001];
signed main()
{
    FastIO;
    int n, T;
    cin >> n >> T;
    For(i, 1, n, 1) cin >> a[i];

    For_down(i, n, 1, 1)
    {
        dp[i] = dp[i+1];
        if(!used[a[i]])
            used[a[i]] = 1, dp[i]++;
    }
    while(cin >> T)
        cout << endl(dp[T]);
    return 0;
}
    
