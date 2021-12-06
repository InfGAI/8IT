#include <iostream>
using namespace std;
int main()
{
    int n; // кол-во вводов
    int x, y; // пара
    int sum = 0; // переменная для суммирования
    int zap1 = 0; // переменная для запоминания 1, если она есть
    int zap2 = 0; // переменная для запоминания 2, если она есть
    bool proof = true;
    cin >> n;
    if (n == 1)
    {
        cin >> x >> y;
        if (x >= y)
        {
            cout << x;
        }
        else
        {
            cout << y;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            sum += x >= y ? x : y;
            if (abs(x - y) % 3 == 1 or abs(x - y) % 3 == 2)
                zap1 = abs(x - y);
            if ((abs(x - y) % 3 == 2) or (zap1 + abs(x - y) % 3 == 2))
                zap2 = abs(x - y);
        }
        if (sum % 3 != 0)
        {
            sum -= zap1;
        }
        if (sum % 3 != 0)
        {
            sum += zap1;
            sum -= zap2;
        }
        if (sum % 3 != 0)
        {
            sum -= zap1;
        }
        if (sum % 3 != 0)
        {
            proof = false;
        }
        if (proof)
        {
            cout << sum;
        }
        else
        {
            cout << "No";
        }
    }
    return 0;
}
//((y-x)%3==2)
