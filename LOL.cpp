#include <iostream>
using namespace std;
int main()
{
    int x, y, max = 0, min = 9999999;
    cin >> x >> y;
    if (x >= y)
    {
        max += x;
    }
    else
    {
        max += y;
    }
    while (x + y != 0)
    {
        cin >> x >> y;
        if (x % 2 != y % 2)
        {
            if (min > abs(x - y))
            {
                min = abs(x - y);
            }
        }
        if (x >= y)
        {
            max += x;
        }
        else
        {
            max += y;
        }
    }
    if (max % 2 == 0)
    {
        max -= min;
    }
    cout << max;
    return 0;
}

