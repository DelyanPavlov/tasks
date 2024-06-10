#include <iostream>
using namespace  std;

const int MAX = 1000;
int fibm[MAX];

long long fib(int n) 
{
    if (n <= 1)
    {
        return n;
    }
    if (fibm[n] != -1)
    {
        return fibm[n];
    }

    fibm[n] = fib(n - 1) + fib(n - 2);
    return fibm[n];
}

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < MAX; i++)
    {
        fibm[i] = -1;
    }

    if (n >= MAX) {
        return 1;
    }

    cout << fib(n);
    return 0;
}
