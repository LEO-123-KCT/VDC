#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
typedef long long ll;
typedef pair<int, int> ii;

ll n;
map<ll, ll> mp;

ll f(ll n)
{
    if(mp.count(n)) return mp[n];
    mp[n] = n;
    return mp[n] = max(f(n / 2) + f(n / 3) + f(n / 4), n);
}

void solve()
{
    mp.clear();
    cout << f(n) << '\n';
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("test.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    cin.tie(0) -> sync_with_stdio(0);
    int t = 1;
//    cin >> t;
//    while(t--) solve();
    while(cin >> n) solve();
    return 0;
}
    
