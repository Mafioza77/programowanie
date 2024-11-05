#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    /*
    for (int i= 20 ;i<=145 ;i++ )
    {
        cout << i << endl;
    }
    */

    /*
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    for (int i = 0; i<=a; i++)
    {
        cout << i << endl;
    }
    */

    /*
    int a;
    for (int i =0; i<=5; i++)
    {
        a = (rand()%49)+1;
        cout<< a << endl;

    }
    */
    /*
    int lotek;
    int a;
    cout << "Menu TOTO LOTKA" << endl;
    cout << "Duzy Lotek = 1 | Maly Lotek = 2 | Szczesliwy Traf = 3 " << endl;
    cin >> lotek;

    switch(lotek)
    {
        case 1:
    {
        for (int i =0; i<=5; i++)
        {
        a = (rand()%48)+1;
        cout<< a << endl;
        }
        break;
    }
    case 2:
    {
        for (int i=0; i<=4; i++)
        {
            a = (rand()%41)+1;
            cout << a << endl;

        }
        break;
    }
    case 3:
    {
            a = (rand()%24)+1;
            cout << a << endl;
        break;
    }
    default:
    cout << "ERROR";

    }
    */
int podana_liczba;
int liczba_prob = 0;
int random;

random = (rand()%100)+1;

cout<< random << endl;


for (int i=0; i<=5; i++)
{
cout << "Podaj liczbe od 1 do 100 " << endl;
cin >> podana_liczba;
liczba_prob = liczba_prob +1;

    if (podana_liczba > random)
{
    cout<<"Za duzo: " << endl;
}
else if (podana_liczba < random)
{
    cout<<"Za malo: " << endl;
}
else if (podana_liczba == random)
{
    cout << "Podales dobra liczbe" << endl;
    cout << "Zgadles za "<<liczba_prob <<" proba" <<endl;
    break;
}
}









    return 0;
}
