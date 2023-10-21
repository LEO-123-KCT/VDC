#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100 + 5;
#define int long long
int n, dp[N][N], K, z;
string s;

int f(int pos, int k)
{
    if(pos > n) return k == K ? 0 : -2;
    int &res = dp[pos][k];
    if(~res) return res;
    res = -2;
    int sum = 0;
    for(int i = pos; i <= n; i++)
    {
        sum = sum * 10 + s[i];
        if(sum > z) break;
        int tmp = f(i + 1, k + 1);
        res = max(res, tmp + (tmp < 0 ? 0 : sum));
    }
    return res;
}

void solve()
{
    cin >> K >> z;
    cin >> s;
    n = s.size();
    s = " " + s;
    for(char &ch : s) ch -= '0';
    memset(dp, -1, sizeof dp);
    int res = f(1, 0);
    cout << (res == -2 ? -1 : res) << '\n';
}

signed main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
}
    
