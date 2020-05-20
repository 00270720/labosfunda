#include "iostream"

using namespace std;

int main(void)
{
    int numero = 0;
        cout << ("\n Digite un numero: "); cin >>numero;
    
        if (numero >= 1){
            cout << ("\n El numero es positivo") <<endl;
        }else if (numero <= -1)
        {
            cout << ("\n El numero es negativo") <<endl;
        }
        
        else if(numero == 0)
        { 
            cout << ("\n El numero es cero") <<endl;
        }
    return 0;
}