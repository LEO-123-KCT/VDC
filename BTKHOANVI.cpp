#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[11];
int n;
bool used[11];

void print()
{
    for(int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

void quaylui(int x)
{
    if(x > n) return print(), void();
    for(int i = 1; i <= n; i++) if(!used[i])
    {
        used[i] = 1;
        a[x] = i;
        quaylui(x + 1);
        used[i] = 0;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("test.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for(int i = 1; i <= n; i++) used[i] = 0;
    quaylui(1);
    return 0;
}
    
