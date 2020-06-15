#include"iostream"

using namespace std;


int room (int n1,int n2, int mcd)
{

cout <<("MCD de dos numeros") << endl;
cout <<("Digite un numero: ") << endl; 
cin >> n1;
cout << ("Digite otro numero: ") << endl;
cin >> n2;


do {
    mcd = n1 % n2;
    if( mcd != 0){
        n1 = n2;
    n2 = mcd;
    } 
}
while(mcd!=0);
cout <<("El MCD es: ");
cout << endl;


return n2;
}
int main()
{

int n1,n2,mcd;
int f;

f = room(n1,n2,mcd);

cout <<f <<endl;

return 0;
}