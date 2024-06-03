#include <iostream>
using namespace std;

int main()
{
	int n, b, num = 0, p, q;
  int lastDigit = num % 10;
  int secondLastDigit = (num / 10) % 10;
	cin >> n >> b;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if ((lastDigit == 1 || lastDigit == 3) && (secondLastDigit == 1 || secondLastDigit == 3))
		{
			num++;
		}
	}
	cout << num;
}
