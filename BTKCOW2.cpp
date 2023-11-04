#include <iostream>
#include <string>

using namespace std;

long long a[21], n, res[21];
string s;
bool flag = true;
long long sum = 0;

void quaylui(long long i, long long remain)
{
    if(i > n)
    {
     	if(remain == sum / 2)
    	{
    	    flag = 0;
    	    for(int i = 1; i <= n; i++)
    	    	cout << res[i];
    	    cout << '\n';
    	}
    	return;
    }
    res[i] = 1;
    quaylui(i + 1, remain - a[i]);
    res[i] = 2;
    quaylui(i + 1, remain);
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		sum += a[i];
	}

	if (sum % 2 == 1) cout << -1;
	else
	{
		quaylui(1, sum);
		if (flag) cout << -1;
	}
	return 0;
}
    
