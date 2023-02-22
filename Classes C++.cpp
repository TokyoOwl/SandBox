#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class FIO{
    string f, i;
    int r, v;
    public:
    int getFIO();
    void viewFIO();
    char setFIO();
};

char FIO::setFIO()
{
    cout << "Vvedite Familiyu" << endl;
    cin >> f;
    cout << "Vvedite Imya" << endl;
    cin >> i;
    cout << "Vvedite Vozrast" << endl;
    cin >> v;
    cout << "Vvedite Rost" << endl;
    cin >> r;
}

int FIO::getFIO()
{
    return v;
    return r;
}

void FIO::viewFIO()
{
    cout << "Familiya: " << f << endl;
    cout << "Imya: " << i << endl;
    cout << "Vozrast: " << v << endl;
    cout << "Rost: " << r << endl;
}

int main()
{
    FIO A;
    A.setFIO();
    A.viewFIO();
    return 0;
}

