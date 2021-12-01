#include <iostream>
using namespace std;
int main()
{
    int a, b, s, m, k = 0;
    cin >> a >> b >> s >> m;
    while (a > b)
    {
        if (a % m == 0)
        {
            a /= m;
            k++;
        }
        else
        {
            a -= s;
            k++;
        }
    }
    if (k == 0)
    {
        cout << "НЕВОЗМОЖНО";
    }
    else
    {
        cout << k;
    }
    return 0;
}
