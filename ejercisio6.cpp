#include "iostream"

using namespace std;


int room(int num[100], int n, int encontrar=0, int f=0)
{

    for (int i = 0; i < n; i++)
{
    cout <<i+1<<(". Digite un numero: ");
    cin >> num[i];
}

cout<<("\nNumero a encontrar: ");
       cin>>encontrar;

for (int i = 0; i < n; i++)
{
    if (num[i]==encontrar)
    f++;
}

if (f!=0)
{
   cout<<("\nEl numero ")<<encontrar<<(" aparece: ")<<f<<(" veces")<<endl;
}
else
{
    cout<<("El numero ")<<encontrar<<(" no aparece en la lista")<<endl;
}

return 0;
}

int main(void)

{

int num[100];
int n;
int encontrar=0;
int f=0;
int F;

cout <<("Digite el numero de elementos del arreglo: ");
cin >>n;

F=room (num, n, encontrar=0, f=0);
cout <<F;

return 0;

}