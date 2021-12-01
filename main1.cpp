#include <iostream>
using namespace std;
int main()
{
    int x, y, max = 0, min = -1;
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
        
        if (((x % 2 == 0) && (y % 2 != 0)) || ((x % 2 != 0) && (y % 2 == 0)))
        {
            if (min > abs(x - y))
            {
                min = abs(x - y);
            }
            else
            {
                min = min;
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
