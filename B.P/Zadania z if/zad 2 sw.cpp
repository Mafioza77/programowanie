#include <iostream>

using namespace std;

int main()
    {
       int danie;
        cout << "Wybierz danie: " ;
        cin >> danie;

    switch(danie)
    {
        case 1:
            cout << "Wybrałes Zupe" << endl;
            break;
        case 2:
            cout << "Wybrałes burgera" << endl;
            break;

    default:
        cout << "ERROR" << endl;
        break;
    
    }
        int napoje;
        cout << "Wybierz napój: ";
        cin >> napoje;
    
    switch(napoje)
    {
        case 1:
            cout << "Wybrałes Cole" << endl;
            break;
        case 2:
            cout << "Wybrałes Lemoniade" << endl;
            break;
        case 3:
            cout << "Wybrałes Wode" << endl;
            break;

    default:
        cout << "ERROR" << endl;
        break;
    
    }
    }
