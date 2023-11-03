#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define all(a) a.begin(), a.end()
#define inc(i, a, b) for(int i = a; i <= b; i++)
#define dec(i, a, b) for(int i = a; i >= b; i--)
#define int long long
typedef long long ll;
typedef pair<int, int> ii;

 void print() {cerr << '\n';} template <typename T, typename... Args>
void print(const T &a, const Args &...args) { cerr << a << ' ', print(args...); }
int n;
int mn = 2e9, cnt;
long long a[30], m;
void f(int i, long long m, int take)
{   
    if(i > n)
    {
        if(m == 0) 
            cnt++, 
            mn = min(mn, take);
        return;
    }
    f(i + 1, m - a[i], take + 1);
    f(i + 1, m, take);
}

signed main()
{
    // freopen("RCSCONVC.inp", "r", stdin);
    // freopen("RCSCONVC.out", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    f(1, m, 0);
    cout << cnt << ' ' << mn;
    return 0;
}
    
