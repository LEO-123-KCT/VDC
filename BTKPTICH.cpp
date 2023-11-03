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

int m;
vector<int> res;
void f(int n, int last)
{
    if(n == 0)
    {
        cout << m << " = ";
        for(int i = 0; i < res.size(); i++)
        {
            cout << res[i];
            if(i != (int)res.size() - 1)
                cout << '+';
        }
        cout << '\n';
    }
    for(int i = last; i <= n; i++)
    {
        res.pb(i);
        f(n - i, i);
        res.pop_back();
    }
}

signed main()
{
    // freopen("RCSCONVC.inp", "r", stdin);
    // freopen("RCSCONVC.out", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    cin >> m;
    f(m, 1);
    return 0;
}
    
