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
int mx;
long long a[30], k;
void f(int i, long long summod, int cnt)
{   
    if(i > n)
    {
        if(summod == 0) mx = max(mx, cnt);
        return;
    }
    f(i + 1, (summod + a[i]) % k, cnt + 1);
    f(i + 1, summod, cnt);
}

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    f(1, 0, 0);
    cout << mx;
    return 0;
}
    
