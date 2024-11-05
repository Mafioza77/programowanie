#include <iostream>

using namespace std;

int main()
{
    /* Zadanie 1*/

    float a;
    cout << "Podaj swoj wzrost: ";
    cin >> a;

    if (a < 150)
    {
        cout<<"Niski";
    }
    else if (a < 180)
    {
        cout << "Sredni ";
    }
    else if (a > 180)
    {
        cout << "Wysoki ";
    }
    else if (a == 0)
        cout << "Zly wzrost";
    else
    {
         cout << "Bledne dane";
    }


/* Zadanie 2*/
    int a;
    int b;
    int c;
    char f;
    cout << "Podaj wartosc a: ";
    cin >> a;
    cout << "Podaj wartosc b: ";
    cin >> b;
    cout << "Wybierz Figure: | Kwadrat - K,k lub Prostokat - P,p |";
    cin >> f;


     switch(f)
     {
        case 'k':
        case 'K':
            cout << "Wybrales kwadrat ";
            c = a * a;
            cout << c;
        break;
        case 'p':
        case 'P':
            cout << "Wybrales prostokat ";
            c = a * b;
            cout << c;
        break;
        default:
            cout << "Error";
     }












    return 0;
}
