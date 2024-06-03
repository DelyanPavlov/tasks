#include <iostream>
using namespace std;

int main()
{
	int n, b, num = 0, p, q;
	cin >> n >> b>>p>>q;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a >= p && a <= q)
		{
			num++;
		}
	}
	cout << num;
}
