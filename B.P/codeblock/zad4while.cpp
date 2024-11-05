#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int wpłata, wypłata, saldo, choose;
    

    do {
        cout << "Menu: " << endl << "1 - Wpłać" << endl << "2 - Wypłata" << endl << "3 - Saldo" << endl << "4 - Zakończ";
        cout << "Wybierz co chcesz zrobic: ";
        cin >> choose;
        if (choose == 1)
        {
            cout << "Wpisz kwotę, którą chcesz wpłacić" << endl;
            cin >> wpłata;
            saldo = wpłata + saldo;
        }
        else if (choose == 2)
        {
            cout << "Podaj kwotę, którą chcesz wypłacić: " << endl;
            cin >> wypłata;
            saldo = saldo - wypłata;
            if (saldo < wypłata)
            cout << "Na koncie nie ma wystarczających środków" << endl;
        }




    } while (choose!=4);
}