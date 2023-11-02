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

int n, a[10], k;
bool danhdau[10];
vector<int> go;
vector<vector<int>> res;

void f(int i)
{
    if(i > k)
    {
        res.pb(go);
        return;
    }
    for(int j = 1; j <= n; j++) if(!danhdau[j])
    {
        danhdau[j] = 1;
        go.pb(a[j]);
        f(i + 1);
        go.pop_back();
        danhdau[j] = 0;
    }
}

signed main()
{
    // freopen("RCSCONVC.inp", "r", stdin);
    // freopen("RCSCONVC.out", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    cin >> k >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    f(1);
    for(auto &x : res)
    {
        for(auto &y: x)
            cout << y << ' ';
        cout << '\n';
    }
    cout << res.size() << '\n';
    return 0;
}
    
