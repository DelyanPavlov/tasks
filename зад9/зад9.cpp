#include <iostream>
using namespace std;

int main()
{
	int n, b, num = 0, p, q;
	cin >> n >> b>>p>>q;
	int a;
  
  int* рус = new int[N];
  int* риж = new int[N];
  int* кестеняв = new int[N];
  int* чер = new int[N];
  
	for (int i = 0; i < n; i++)
	{
		cin >> a;
  			switch (a)
		{
		case 1:
      рус[i] =a;
			break;
		case 2:
      риж[i] =a;
			break;
		case 3:
      кестеняв[i] =a;
			break;
		case 4:
      чер[i] =a;
			break;
		}
	}
	cout << num;
}
for(int i = 0; i<n;i++)
{
  cout<<рус[i]<<", ";
}
cout<<endl;
for(int i = 0; i<n;i++)
{
  cout<<риж[i]<<", ";
}
cout<<endl;
for(int i = 0; i<n;i++)
{
  cout<<кестеняв[i]<<", ";
}
cout<<endl;
for(int i = 0; i<n;i++)
{
  cout<<чер[i]<<", ";
}
cout<<endl;
