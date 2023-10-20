#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define pause system("pause")
#define all(a) a.begin(), a.end()
#define Exit(x) cout << x, exit(0)
#define rep(i, n) for (int i(1); i <= n; i++)
#define inc(i, a, b) for (int i(a); i <= b; i++)
#define dec(i, a, b) for (int i(a); i >= b; i--)

typedef long long ll;
typedef pair<int, int> ii;
const int N = 5e3 + 400;
int n, m, k;
ll S[N], dp[N][N];

void maximize(ll &a, ll b)
{
	if(b > a) a = b;
}

ll f(int pos, int k)
{
    if(pos + m - 1 > n) return (k == 0 ? 0 : -1e15);
	ll &res = dp[pos][k];
    if (res != -1) return res;
    res = f(pos + 1, k);
    res = max(res, f(pos + m, k - 1) + S[pos + m - 1] - S[pos - 1]);
    return res;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(dp, -1, sizeof dp);
    cin >> n >> m >> k;
    rep(i, n) cin >> S[i], S[i] += S[i - 1];
    cout << f(1, k);
    return 0;
}

/*   /\_/\
    (  ._.)
    / >01 \>10
*/
    
