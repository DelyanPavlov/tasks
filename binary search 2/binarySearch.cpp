#include <iostream>
using namespace std;

int main()
{
    int n, mid, curMin, curMax;
    cin >> n;
    curMin = -n;
    curMax = n;
    mid = (curMin + curMax) / 2;
    char inp;

    while(true)
    {
        cout << mid << endl;
        cin >> inp;
        if (inp == 'u')
        {
            curMin = mid;
        }

        if (inp == 'd')
        {
            curMax = mid;
        }

        if (inp == 'y')
        {
            break;
        }
        inp = ' ';
        mid = (curMin + curMax) / 2;
    }
}
