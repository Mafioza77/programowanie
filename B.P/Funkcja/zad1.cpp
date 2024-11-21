#include <iostream>
#include <vector>
#include <string>

using namespace std;

float iloraz(float a,float b)
{

        return a/b;
    
}

void kat(float k)
{
    if (0<k<90){
        cout << "Jest to kat ostry \n";
    }
    else if (k==90)
    {
        cout << "Jest to kat prosty \n";
    }
    
    else if (k>90 && k<180)
    {
        cout << "Jest to kat rozwarty \n";
    }
    
}

int main()
{
    float a;
    float b;

    cout << "Podaj pierwsza liczbe: \n";
    cin >> a;
    cout << "Podaj druga liczbe: \n";
    cin >> b;

    
    if (b!=0){
        iloraz(a,b);
        cout << a/b;
    }
    else {
        cout << "ERROR\n";
    }


    return 0;
}
