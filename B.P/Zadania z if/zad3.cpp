#include <iostream>
#include <fstream>

using namespace std;

int main()
    {
      int dzien;
      int miesiac;
      int rok;

    cout << "Podaj dzien: " << endl;
    cin >> dzien;

      if (dzien >= 1 && dzien <= 31)
      {
        cout << "Podaj miesiac: " << endl;
        cin >> miesiac;
        if (miesiac >= 1 && miesiac <= 12)
        {
            cout << "Podaj Rok" << endl;
            cin >> rok;
            if (rok >= 1900 && rok <= 2050)
            {
                cout << dzien<< "." << miesiac <<  "." << rok << endl;
            }
        }
      }
      else
      cout << "Błędne dane" << endl;

    }
