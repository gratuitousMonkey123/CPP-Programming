#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    bool isPrime = true;
    cout << "Ivest skaiciu nuo 1 iki 2147483647" << '\n';
    cin >> x; //number input, cin reiskia kad reiks kazka ivest i console
    for (int i = 2; i < x; i++)
        /*
        int i = 2, reiskia kad loopint prades nuo skaiciaus 2
        i < x reiskia loopins kol i bus maziau nei x
        i++ reiskia kiekviena loopo cycle i padides vienu, kitaip sakant i = i + 1
        */


        /*
        x = 9
        1 iteration: x = 9, i = 2, x%i = 9 % 2 = 1, ne nulis, reiskia all ciki, kolkas dar prime is 2 nesidalina
        2 iteration: x = 9, i = 3, x%i = 9 % 3 = 0, dalijasi is 3, reiskia not prime
        */
    {
        if (x % i == 0) // 5 % 2 = 1 nes 5 / 2 liekana yra 1, todel x % i liekana jeigu yra lygi 0 reiskia x dalinasi is i
        {
            cout << "NE" << endl;
            isPrime = false;
            break;
        }
    }
    if (isPrime) // jeigu bool isPrime == true, reiskia skaicius prime
    {
        cout <<"TAIP";
    }
    return 0;
}

