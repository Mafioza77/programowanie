#include <iostream>
#include <fstream>

using namespace std;

int main()
    {
        
        int min;
        int max;
        int przedz;
        cout << "Podaj liczbe minimalną: ";
        cin >> min;
        cout << "Podajliczbe maksymalną: ";
        cin >> max;
        cout << "Podaj liczbę z przedziału: ";
        cin >> przedz;

        if (max > min)
        {
            if (przedz > min && przedz < max)
            cout << "Liczba miesci sie w przedziale";
        }
        else
        {
            cout << "Liczba nie miesci sie w przedziale";
        }

    }
