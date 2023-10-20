#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define pause system("pause")
#define all(a) a.begin(), a.end()
#define rep(i, n) for (int i(1); i <= n; i++)
#define inc(i, a, b) for (int i(a); i <= b; i++)
#define dec(i, a, b) for (int i(a); i >= b; i--)

typedef long long ll;
typedef pair<int, int> ii;
const int M = 1e3 + 10;
const int N = 1e6 + 5;
int a[N], n, m, t;
bool existed[M];
vector<int> s;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    if(n > m)
    {
        for(int i = 1; i <= n; i++)
            cin >> a[i], a[i] = (a[i - 1] + a[i]) % m;
        for(int i = 1; i <= n; i++)
        {
            if(existed[a[i]]) return cout << "YES\n", 0;
            existed[a[i]] = 1;
        }
    }
    else
    {
        rep(i, n)
        {
            cin >> t;
            int curs = s.size();
            inc(i, 0, curs - 1)
            {
                int tmp = (s[i] + t) % m;
                if(!a[tmp]) a[tmp] = 1, s.pb(tmp);
            }
            if(!a[t % m]) a[t % m] = 1, s.pb(t % m);
            if(a[0]) return cout << "YES", 0;
        }
    }
    cout << "NO";
    return 0;
}

/*   /\_/\
    (  ._.)
    / >01 \>10
*/
    
