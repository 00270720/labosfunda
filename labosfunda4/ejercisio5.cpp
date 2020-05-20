#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    string palabra;

 cout << "\n Ingrese una palabra: " << endl;
 cin >> palabra;

 if (palabra.front() == palabra.back())
 {
   cout << ("\n Las letras son iguales") <<endl;
 }else
 {
     cout << ("\n Las letras no son iguales") <<endl;
 }
 
return 0;
}