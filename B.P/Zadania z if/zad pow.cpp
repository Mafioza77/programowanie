#include <iostream>

using namespace std;

int main()
    {
        char gender;
        cout << "Jakiej Płci jestes: ";
        cin >> gender;

        switch(gender)
        {
            case 'K':
            case 'k':
                cout << "Jestes kobietą";
            break;
            case 'm':
            case 'M':
                cout << "Jestes mezczyzna";
            break;

        default:
            cout << "ERROR";

        }
        

    }
