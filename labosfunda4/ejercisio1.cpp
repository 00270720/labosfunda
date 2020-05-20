#include "iostream"



using namespace std;

int main(void)
{
    int num1, num2;

        cout << ("\n Ingrese un numero: "); cin>>num1;
        cout << ("\n Ingrese otro numero: "); cin>>num2;

        if(num1 % num2 == 0){
                cout << ("\n El numero es divisible") <<endl;
        }else{
                cout << ("\n El numero no es divisible") <<endl;
        }

    return 0;
}