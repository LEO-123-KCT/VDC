#include <bits/stdc++.h>
#define mp make_pair

using namespace std;
typedef long long ll;

const int N = 1007, oo = (int)1e9 + 7;
int n, s, dp[N][N * 5];
bool avail[N][N * 5];
string a;

int cal(int cnt, int remain)
{
	if (cnt == n) return (remain == 0 ? 0 : oo);
	if (avail[cnt][remain]) return dp[cnt][remain];

	avail[cnt][remain] = true;
	dp[cnt][remain] = oo;

	for (int i = cnt, sum = 0; i < n; ++i)
	{
		(sum *= 10) += a[i] - '0';
		if (sum > remain) break;
		dp[cnt][remain] = min(dp[cnt][remain], cal(i + 1, remain - sum) + 1);
	}

	return dp[cnt][remain];
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	getline(cin, a, '='); n = a.size();
	cin >> s;
	
	cout << cal(0, s) - 1;

	return 0;
}
    
