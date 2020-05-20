#include "iostream"
#include "math.h"


using namespace std;

int main ()
{
    string producto;
    
    float precio;
    float compras;
    float mult1;

    cout << ("Nombre del producto: ");
    cin >> producto;

    cout << ("Cantidad de compras: ");
    cin >> compras;

    cout << ("Precio del producto: $");
    cin >> precio;

    int mult = compras*precio;

    cout << ("Resultado:") <<endl;

    cout << ("\n Producto: ") <<producto<<endl;
    cout << ("\n Cantidad: ") <<compras<<endl;
    cout << ("\n Precio del producto: $") <<precio<<endl;
    cout << ("\n Dinero gastado: $") <<mult<<endl;

    cout << ("Operacion finalizada") <<endl;


    return 0;


}
