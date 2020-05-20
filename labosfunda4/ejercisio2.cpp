#include "iostream"

using namespace std;

int main(void)
{
    int numero;
        cout << ("\n Digite un numero: "); cin >>numero;

        if (numero % 2 == 0){
            
            cout << ("\n El numero es par") <<endl;
        }else
        {
            cout << ("\n El numero es impar") <<endl;
        }
    return 0;
}