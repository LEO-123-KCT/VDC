#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define all(a) a.begin(), a.end()
#define inc(i, a, b) for(int i = a; i <= b; i++)
#define dec(i, a, b) for(int i = a; i >= b; i--)
 
typedef long long ll;
typedef pair<int, int> ii;

 void print() {cerr << '\n';} template <typename T, typename... Args>
void print(const T &a, const Args &...args) { cerr << a << ' ', print(args...); }

int n, a[505], k;
vector<int> go;
vector<vector<int>> res;

void f(int i)
{
    if(i > k)
    {
        res.pb(go);
        return;
    }
    for(int j = 1; j <= n; j++)
    {
        go.pb(a[j]);
        f(i + 1);
        go.pop_back();
    }
}

int main()
{
    cin.tie(0) -> sync_with_stdio(0);
    cin >> k >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    f(1);
    cout << res.size() << '\n';
    for(auto &x : res)
    {
        for(auto &y: x)
            cout << y << ' ';
        cout << '\n';
    }
    return 0;
}
    
