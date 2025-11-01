#include <bits/stdc++.h>
using namespace std;

/*
isivest skaiciu kuris turetu bent 2 skaitmenis ir tada reikia isvest i console atskirus jo skaitmenis atskirtus kableliu
*/

void pavyzdys()
{
    cout << "cin 1234 ir isveda 4, 3, 2, 1\ncin 147258369 ir isveda 9, 6, 3, 8, 5, 2, 7, 4, 1\n";
}

void uzduotisHere()
{
    int a;
    cin >> a;
    while (a != 0)
    {
        cout << a % 10;
        a /= 10; // a = a / 10
        if (a != 0)
        {
            cout << ", ";
        }
    }
}


int main()
{
    pavyzdys();
    cout << "PAVYZDYS END\n\n\n\n";
    uzduotisHere();
    return 0;
}
