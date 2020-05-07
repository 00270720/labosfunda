#include "iostream"
#include "cmath"
    #define PI 3.1416

using namespace std;

int main (void)
{
    int radio;
    cout << "Ingrese el valor del radio del circulo: " <<endl;
    cin >> radio;

    cout << "Cargando..." << endl;
     

    cout << "El perimetro es: " << PI * (2 * radio) << endl;
    cout << "El area es: " << PI * (radio * radio) << endl;


    return 0;


}
