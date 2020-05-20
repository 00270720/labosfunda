#include <iostream>
#include "string"

using namespace std;

int main(void)
{ 
 string palabra;

 cout << "Ingrese una palabra: " << endl;
 cin >> palabra;
 
 if((palabra.length())== 10)
        {
        cout << "\n La palabra es igual a 10 caracteres"<< endl;
        } 
        else if((palabra.length())>= 10)
        {
        cout << "\n La palabra es mayor a 10 caracteres"<< endl;
        }
        else {
            cout << "\n la palabra es menor a 10 caracteres" << endl;
        }

        if ((palabra.size() % 2) == 0)
        {
            cout << ("\n La palabra es par") <<endl;
        }else
        {
            cout << ("\n La palabra es impar") <<endl;
        }

    return 0;
}


