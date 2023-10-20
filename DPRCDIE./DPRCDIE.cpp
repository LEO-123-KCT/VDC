#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define pause system("pause")
#define all(a) a.begin(), a.end()
#define Exit(x) cout << x, exit(0)
#define rep(i, n) for(int i(1); i <= n; i++)
#define inc(i, a, b) for(int i(a); i <= b; i++)
#define dec(i, a, b) for(int i(a); i >= b; i--)

typedef long long ll;
typedef pair<int, int> ii;
int dp[1500][1500][3];

void maximize(int &a, int b)
{
	if(b > a) a = b;
}

int f(const int &H, const int &A, const int &envi, const int &day)
{
	if(H <= 0 || A <= 0) return day;
	int &res = dp[H][A][envi];
	if(res != -1) return res;

	if(envi == 0) 
	{
		maximize(res, f(H - 5, A - 10, 1, day + 1));
		maximize(res, f(H - 20, A + 5, 2, day + 1));		
	}
	else
	{
		res = f(H + 3, A + 2, 0, day + 1);
	}
	return res;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t, H, A;
	cin >> t;
	while(t--)
	{
		memset(dp, -1, sizeof dp);
		cin >> H >> A;
		cout << f(H + 3, A + 2, 0, 0) << '\n';
	}
    return 0;
}

/*   /\_/\         
    (  ._.)        
    / >01 \>10
*/
    
