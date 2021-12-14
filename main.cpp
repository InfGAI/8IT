#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s, word, mem;
    vector <int> a;
    int k = 0;
    getline(cin, s);
    s=s+' ';
    for (char sym: s)
    {
        if (sym == ' ')
        {
            k++;
        }
       if (sym != ' ')
       {
           word += sym;
       }
       else
       {
           if (word.size() > mem.size())
           {
               mem = word;
           }
           a.push_back(word.size());
           word = "";
       }

    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << "Количество букв в " << i + 1 << " слове: " << a[i] << "\n";
    }
    cout << "Количество слов: " << k << "\n";
    cout << "Одно из самых больших слов: " << mem;
    return 0;
}
