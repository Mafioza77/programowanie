#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int a, b, c;
do {
system("cls");
cout << "Podaj wartość a: ";
cin >> a;
cout << "Podaj wartość b: ";
cin >> b;
c=a*b;
cout << "a * b = " << c << endl;
} while(c=0);
}