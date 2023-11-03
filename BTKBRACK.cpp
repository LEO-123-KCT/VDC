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
vector<int> go;
vector<vector<int>> res;
void f(int i, int bal)
{
    if(i == n)
    {
        if(bal == 0) res.pb(go);
        return;
    }
    if(bal < 0) return;
    go.pb(1);
    f(i + 1, bal + 1);
    go.pop_back();
    
    go.pb(-1);
    f(i + 1, bal - 1);
    go.pop_back();
}

signed main()
{
    // freopen("RCSCONVC.inp", "r", stdin);
    // freopen("RCSCONVC.out", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    f(0, 0);
    cout << res.size() << '\n';
    for(auto &x : res)
    {
        for(auto &y : x)
            cout << (y == 1 ? '(' : ')');
        cout << '\n';
    }
    return 0;
}
    
