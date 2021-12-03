// Online IDE - Code Editor, Compiler, Interpreter
#include <iostream>

using namespace std;

int main() {
    int x = 0, y = 0, sum = 0, pare1 = 0, pare2 = 0;
    cin >> x >> y;
    while (x + y != 0) {

        if (x > y) {
            sum += x;
        } else {
            sum += y;
        }
        if (x % 2 == 1 && x > pare1 && x<y) {
            pare1 = x;
            pare2 = y;
            cout << pare1;
        } else if (y % 2 == 1 && y > pare1 && y<x) {
            pare1 = y;
            pare2 = x;
            cout << pare1;
        }
        cin >> x >> y;
    }
   // cout << sum;
    if (sum % 2 == 1) {
        cout << sum;
    } else {
        cout << sum - pare2 + pare1;
    }
}
