#include <bits/stdc++.h>

using namespace std;

int x, y;
bool row[8], col[8], cro1[20], cro2[20];

bool BT(int i)
{
	if (i == 8) return 1;
	if (row[i] == 1)
	{
		if (BT(i + 1)) return 1;
	}
	else
	{
		for (int j = 0; j < 8; ++j)
			if (!row[i] && !col[j] && !cro1[i - j + 8] && !cro2[i + j])
			{
				row[i] = col[j] = cro1[i - j + 8] = cro2[i + j] = 1;
				if (BT(i + 1))
				{
					cout << i + 1 << ' ' << j + 1 << '\n';
					return 1;
				}
				row[i] = col[j] = cro1[i - j + 8] = cro2[i + j] = 0;
			}
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();

	cin >> x >> y;
	--x, --y;
	row[x] = col[y] = cro1[x - y + 8] = cro2[x + y] = 1;
	BT(0);
	return 0;
}
    
