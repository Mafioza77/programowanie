#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int losowosc(int min, int max)
{
 
        return (rand()% (max - min + 1)) + min;

}

int main()
{     
    int min;
    int max;
    int wynik;

    cout<<"Podaj wartosc min: \n";
    cin >> min;
    cout<<"Podaj wartosc max: \n";
    cin >> max;

    if (min < max)
    {
        cout << losowosc(min, max);
    }
    else {
        cout << "ERROR";
    }
    

    return 0;
}
