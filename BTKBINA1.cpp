#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[26];
int n;

void print()
{
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << '\n';
}

void quaylui(int x)
{
    if(x > n) return print(), void();
    a[x] = 0;
    quaylui(x + 1);
    a[x] = 1;
    quaylui(x + 1);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("test.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    quaylui(1);
    return 0;
}
    
