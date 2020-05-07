#include "iostream"
#include "cmath"
#include "stdio.h"


using namespace std;

int main (void)
{
    int reg;
    float a, b, c, pol1, pol2, pol3, pol4, pol5;


    printf ( "Uso de la formula general para resolver ecuacion cuadratica \n");
    printf ( "\n Ingrese el termino a de la seccion cuadratica\n");
    scanf ( "%f",&a );
    printf ( "\n Ingrese el termino b de la seccion lineal\n");
    scanf ( "%f",&b );
    printf ( "\n Ingrese el termino c de la seccion independiente\n");
    scanf ( "%f",&c );

    if (a!= 0)
    {
            pol3=pow(b,2);
            pol4=(4*a*c);
            pol5=(pol3-pol4);
            if (pol5<0)
            {
                    printf ( "No existen raices negativas");
                    printf ( "\a" );
            }
             
             if (pol5>=0)
             
             {
                 pol1= ((-b+(sqrt(pol5)))/(2*a));
                pol2= ((-b-(sqrt(pol5)))/(2*a));

                if (pol1==pol2)
                {
                    printf( "\n El resultado es igual para + y - y es: %.4f", pol1);
                }

                if (pol1!=pol2)
                {

                    printf ( "\n El resultado de + es %.4f", pol1);
                    printf ( "\n El resultado de - es %.4f", pol2);
                }
                  
             }
             
            

    }
    if (a==0)
    {
        printf( "No es posible realizar la operacion");
        printf( "\a" );
    }

        cout << "." << endl;

    return 0;
    
}