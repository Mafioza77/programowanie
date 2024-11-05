#include <iostream>
#include <fstream>
using namespace std;

int main()
{
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
    cout << "Błędny pin" << endl << "Pozostałe próby: " << tries << endl;
system("cls");
}
} while (tries!=0);
}