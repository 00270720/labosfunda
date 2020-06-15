#include <iostream>

using namespace std;

int room(int dia,int nextd,int mes,int nextm,int year,int nexty)
{

if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((year % 4 != 0) || (year % 100) == 0) && (year % 400) != 0) || dia == 31)

    {
        nextm = mes + 1;
        nextd = 1;
    }
    else
        {
            nextd = dia + 1;
            nextm = mes;
        }

    if (nextd == 1 && nextm == 13)
        {
            nextm = 1;
            nexty = year + 1;
        }
    else
            nexty = year;

    cout <<("\nDatos:") <<endl;
    cout <<("\nAnio : ") << nexty << endl;
    cout <<("\nMes : ") << nextm << endl;
    cout <<("\nDia : ") << nextd << endl;
    cout << endl;
              
return 0;
}

int main()

{

int dia,nextd,mes,nextm,year,nexty,F;

cout <<("\nFechas!") <<endl;
cout <<("Ingrese el dia: ") <<endl;
cin >> dia;

cout <<("Ingrese el numero de mes: ") <<endl;
cin >> mes;

cout <<("Ingrese el anio: ") <<endl;
cin >> year;

F = room(dia,nextd,mes,nextm,year,nexty);

cout <<F << endl;

return 0;
              
}