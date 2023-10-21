#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 2000 + 5;
int n;
string a, b;
int dp[N][N];

int f(int i, int j)
{
    if(i == a.size() && j == b.size()) return 0;
    if(i > a.size() || j > b.size()) return 1e9;
    int &res = dp[i][j];
    if(~res) return res;
    res =  1e9;
    if(a[i] == b[j]) res = f(i + 1, j + 1);
    else
    {
        res = min(res, f(i + 1, j) + 1);
        res = min(res, f(i, j + 1) + 1);
        res = min(res, f(i + 1, j + 1) + 1);
    }
    return res;
}

void solve()
{
    cin >> a >> b;
    memset(dp, -1, sizeof dp);
    cout << f(0, 0) << '\n';
}

int main()
{
    cin.tie(0) -> sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}
    
