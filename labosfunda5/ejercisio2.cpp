#include "iostream"

using namespace std;

int hora(int hh, int mm, int ss,int ac)
{

    if ( hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59 )
    {ss++;
     if ( ss == 60 )
    { ss = 0;
      mm++;
     if ( mm == 60 )
     {mm = 0;
      hh++;
      if ( hh == 24 )
       hh = 0;}
        }
     cout <<("\nUn segundo despues la hora es: ") <<hh <<(" h : ") <<mm <<(" min : ") <<ss <<(" seg ")<<endl;
     }
    else
        cout <<( "\nLa hora es incorrecta..." );
    return ss;
}
int main(){
int hh, mm, ss, efe, ac;

 cout <<("\nDigite la hora: ");
    cin>>hh;
    cout <<("Digite los minutos: ");
    cin>>mm;
    cout <<("Digite los segundos: ");
    cin>>ss;

efe = hora(hh, mm, ss, ac);

   cout<<efe<<endl; 
   return 0;
}
