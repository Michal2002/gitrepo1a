#include <iostream>
#include <iomanip>
using namespace std;
void choinka(int x, char z, char p)
{
    int t, w, e, r;
    for (t = 1; t <= x-1; t++)
{
        for (w = 1 ; w <= x-t-1 ; w++)
{
            cout << " ";
}
            for (e = 1; e <= 2*t-1 ; e++)
{
                cout << z;
        }
        cout << endl;
}
    for (r = 1; r <= x-2; r++)
{
    cout << " ";
}
    cout << p;
    }

int main()
{
    int x;
    char znak;
    char znak2;
    cout << "Wprowadz wysokosc: ";
    cin >> x;
    cout<<"podaj znak drzewa: ";
    cin>>znak;
    cout<<"podaj znak pnia: ";
    cin>>znak2;
    choinka(x, znak, znak2);
    return 0;
}
