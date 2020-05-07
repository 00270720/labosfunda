#include "iostream"

using namespace std;

int main (void)

{
    int reg;  

    float cal1, cal2, cal3, prom;

    printf ( "escribe el numero enteros a operar:");
    scanf ( "%d",&reg);
    cout << "introduce los datos" << endl;
    printf ( "introduce un numero:");
    scanf ("%f",&cal1);
    printf ( "introduce un numero:"); 
    scanf ("%f",&cal2);
    printf ( "introduce un numero:");
    scanf ("%f",&cal3);

    prom = (cal1+cal2+cal3)/3;
    cout << "Calculando..." << endl;

    printf ("Registro numero: %d",reg);
    cout << "..." << endl;
    cout << "Obteniendo..." << endl;
    cout << printf ( "El promedio de los numeros enteros es: %.2f", prom ) << endl;
    cout << "Promedio obtenido exitosamente." << endl;

      return 0;
}