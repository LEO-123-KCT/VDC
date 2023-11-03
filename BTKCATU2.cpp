#include <iostream>
using namespace std;
#define int long long

int n, w[25], v[25], m;
int mx = 0, cache[25], res[25];

void quaylui(int i, int W, int V)
{
    if(i > n)
    {
        if(W <= m && V > mx)
        {
            mx = V;
            for(int i =1; i <= n; i++)
                res[i] = cache[i];
        }
        return;
    }
    cache[i] = 0;
    quaylui(i + 1, W, V);
    cache[i] = 1;
    quaylui(i + 1, W + w[i], V + v[i]);
}

signed main() 
{
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    quaylui(1, 0, 0);
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        cnt += res[i];
    cout << cnt << '\n';
    for(int i = 1; i <= n; i++)
        if(res[i]) cout << i << ' ';
	return 0;
}
    
