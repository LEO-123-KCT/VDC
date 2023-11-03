#include <iostream>
using namespace std;
typedef long long ll;
int n;
int cache[25];
int a[25], res [25];
ll m;

void kq()
{
    for(int i = 1; i <= n; i++)
        res[i] = cache[i];
}

void quaylui(int i, ll m)
{
    if(i > n)
    {
        if(m == 0) kq();
        return;
    }
    cache[i] = 0;
    quaylui(i + 1, m);
    cache[i] = 1;
    quaylui(i + 1, m - a[i]);
}

int main() 
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    quaylui(1, m);
    int cnt = 0;
    for(int i= 1; i <= n; i++)
        cnt += res[i];
    if(cnt == 0)
    {
        cout << "khongtherut";
        return 0;
    }
    cout << cnt << '\n';
    for(int i = 1; i <= n; i++)
        if(res[i]) cout << i << ' ';
	return 0;
}
    
