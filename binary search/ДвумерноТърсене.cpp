#include <iostream>
using namespace std;

int main()
{
    int n = 100, mid = 0;
    int num = 0;
    char inp;
    cout << "Hello. eter 'r' for the rules. and 'c' to continue on with the game, press 's' to set the range of the program. \n";
    cin >> inp;
    if (inp == 'r')
    {
        cout << "think of a number between " << -n << " and "<< n <<". \n";
        cout << "then the program will try to guess your number. It will show you a number and ask you if it this isyour number.\n";
        cout << "if it is then press'y', if it isn't then press 'u' if your number is biger that what the program gave you and 'd'if it's smaler and'y'if the progam guesed the number.\n";
        cout << "click 'c' when you are done. \n";
        cin >> inp;
    }
    else if (inp == 's')
    {
        cin >> n;
         mid = n;
         num = 0;
    }

    cout << num <<endl;
    while(true)
    {
        cin >> inp;
        mid = (mid + 2 - 1) / 2;
        switch (inp)
        {
        case'u':
            num += mid;
            break;
        case'd':
            num -= mid;
            break;
        }
            if (inp == 'y')
            {
                break;
            }
        cout << num<<endl;
    }

}
