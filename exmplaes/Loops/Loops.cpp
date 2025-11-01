#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    for loop


    while loop
    do while loop


    */


    cout << "For loop\n";
    cout << "Skaiciai nuo 1 iki 10\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << '\n';
    }


    cout << "While loop\n";
    cout << "1234 dalyba is 10 while jis nera 0\n";
    int a = 1234;
    while (a != 0)
    {
        cout << a << '\n';
        a = a / 10;
    }



    cout << "Do while loop\n";
    a = 1234;
    do
    {
        cout << a << '\n';
        a = a / 10;

    }
    while (a != 0);



    return 0;
}
