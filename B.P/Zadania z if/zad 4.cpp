#include <iostream>
#include <fstream>

using namespace std;

int main()
    {
    int pierwsza;
    int druga;
    int trzecia;


        cout << "Podaj Pierwszą liczbe: "<< endl;
        cin >> pierwsza;
        cout <<"Podaj drugą liczbe: "<< endl;
        cin >> druga;
        cout << "Podaj trzecią liczbe: "<< endl;
        cin >> trzecia;

    if (pierwsza < druga && pierwsza < trzecia)
        cout << "Najmniejszą liczbą jest liczba: " << pierwsza;

    else if (druga < pierwsza && druga < trzecia)
        cout << "Najmniejszą liczbą jest liczba: " << druga;

    else if (trzecia < pierwsza && trzecia < druga)
        cout << "Najmniejszą liczbą jest liczba: " << trzecia;
    else
        cout << "Błąd"<< endl;


    }
