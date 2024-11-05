#include <iostream>

using namespace std;

int main()
{
/*
int a, b, c;
do {
system("cls");
cout << "Podaj wartoœæ a: ";
cin >> a;
cout << "Podaj wartoœæ b: ";
cin >> b;
c=a*b;
cout << "a * b = " << c << endl;
} while(c=0);
*/
/*
int password, tries, repeat;
tries = 3;
cout << "Podaj pin: ";
cin >> password;
do {
cout << "Powtórz pin: ";
cin >> repeat;
if (repeat == password) {
    break;
}
else {
    tries--;
    cout << "B³êdny pin" << endl << "Pozosta³e próby: " << tries << endl;
system("cls");
}
} while (tries!=0);*/
int wplata, wyplata, saldo, choose;
saldo = 1400;
    do {

        cout << "Menu: " << endl << "1 - Wplac" << endl << "2 - Wyplata" << endl << "3 - Saldo" << endl << "4 - Zakoncz" << endl;
        cout << "Wybierz co chcesz zrobic: "<< endl;
        cin >> choose;
        system("cls");
        if (choose == 1)
        {
            system("cls");
            cout << "Wpisz kwote, ktora chcesz wplacic" << endl;
            cin >> wplata;
            saldo = wplata + saldo;
        }
        else if (choose == 2)
        {
            system("cls");
            cout << "Podaj kwote, która chcesz wyplacic: " << endl;
            cin >> wyplata;

            if (saldo < wyplata){
                system("cls");
            cout << "Na koncie nie ma wystarczajacych srodkow" << endl;
            }
            else{
                saldo = saldo - wyplata;
            }
        }
        else if (choose == 3)
        {
        system("cls");
        cout << saldo << endl;
        }
    } while (choose!=4);
}
