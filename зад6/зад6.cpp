#include <iostream>
using namespace std;

int main()
{
	int n, b, num = 0;
	cin >> n >> b;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
    if (a % 10 == 3) 
    {
      num++;
    }
	}
	cout << num;
}
