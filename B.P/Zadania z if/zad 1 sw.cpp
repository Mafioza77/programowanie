#include <iostream>
#include <fstream>

using namespace std;

int main()
    {
       int pkt;
        cout << "Podaj liczbe punktów: ";
        cin >> pkt;

    switch(pkt)
    {
        case 0 ... 10:
            cout << "Twoja ocena to: 2";
            break;
        case 11 ... 13:
            cout << "Twoja ocena to: 3";
            break;
        case 14 ... 16:
            cout << "Twoja ocena to: 4";
            break;
        case 17 ... 18:
            cout << "Twoja ocena to: 5";
            break;
    
    default:
        cout << "ERROR";
        break;
    }

    }
