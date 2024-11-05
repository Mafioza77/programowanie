#include <iostream>

using namespace std;

int main()
    {
        int a;
        int b;
        char znak;
        cout << "Podaj dwie liczby\n";
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "Podaj znak + - * /";
        cin >> znak;

    switch (znak)
    {
    case '+':
        cout << a+b;
        break;
    case '-':
        cout << a-b;
        break;
    case '*':
        cout << a*b;
        break;
    case '/':
        if (b != 0)
        {
        cout << a/b;
        }
        else
        cout << "Nie można dzielić przez 0 sknero";
        break;

    default:
        cout << "ERROR";
        break;
    }

    }
