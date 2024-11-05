#include <iostream>
#include <fstream>

using namespace std;

int main()
    {
        int numer;
        
        cout << "| Lista Produktów |" << endl << "Cola - 1" << endl << "Woda - 2" << endl << "Czekolada - 3" << endl << "Fanta - 4" << endl <<  "Mirinda - 5" << endl;
        cout << "Wybierz Produkt: ";
        cin >> numer;
    
if ( numer < 1 && numer > 5)
{
    cout << "Zły numer " << endl;
}
    else
    {
        if (numer == 1)
        {
            cout << "Wybrałeś Cole" << endl;
        }
        else if (numer == 2)
        {
            cout << "Wybrałeś Wode" << endl;
        }
        else if (numer == 3)
        {
            cout << "Wybrałeś Czekolade" << endl;
        }
        else if (numer == 4)
        {
            cout << "Wybrałeś Fante" << endl;
            
        }
        else if (numer == 5)
        {
            cout << "Wybrałeś Mirinde" << endl;
        }

    }
    }
