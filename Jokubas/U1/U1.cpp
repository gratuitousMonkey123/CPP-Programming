#include <bits/stdc++.h>
using namespace std;

// ivest skaiciu ir tada patikrint 3 reikalus.
// 1. Ar dalinasi is 5
// 2. Ar dalijasi is 2
// 3. Ar skaicius yra didesnis nei 150

void uzduotiesKodasCia()
{
    int x;
    cin >> x;
    if (x % 5 == 0)
    {
        cout << "dalinasi is 5\n";

    }
    else
    {
        cout << "nesidalina is 5\n";
    }
    if (x % 2 == 0)
    {
        cout << "dalinasi is 2\n";
    }
    else
    {
        cout << "Nesidalina is 2\n";
    }
    if (x % 2 != 0 && x % 5 != 0)
    {
        cout << "nesidalina nei is 5 nei is 2\n";
    }

}

int main()
{
    uzduotiesKodasCia();
    return 0;
}
