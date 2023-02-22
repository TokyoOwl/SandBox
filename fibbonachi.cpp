#include <iostream>

using namespace std;

int main()
{
    int fib1 = 0;
    int fib2 = 1;
    int fib, n;
    cout << "Vvedite nomer chisla fibbonachi" << endl;
    cin >> n;
    if (n=1)
    {
        cout << "Chislo: " << fib1 << endl;
    }
    else if (n=2) 
    {
        cout << "Chislo: " << fib2 << endl;
    }
    if (n > 2)
    {
    for (int i=0; i<n; i++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    cout << "Chislo: " << fib << endl;
    }
    return 0;
}
