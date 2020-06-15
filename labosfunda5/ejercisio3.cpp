#include "iostream"
#include "cstdlib"
#include "stdio.h"

 using namespace std;

     bool FALSETRUE (int fecha)
    
{
    if (fecha % 4 != 0 || (fecha % 100 == 0 && fecha % 400 != false))
      
      {
          cout <<("\nNo es biciesto\n") <<endl;
        return false; 
      }
        
    else if  (fecha % 4 != 0 || (fecha % 100 == 0 && fecha % 400 != true))
     
       {
           cout <<("\nEs bisiesto\n") <<endl;
            return true;
       }
            
    return false,true;
}
 int main()
 {
     int f;
     int fecha;
     
     
    cout <<("Es o no a year Biciesto") <<endl;
    cout <<("Digite cualquier year: ") <<endl;
    cin >> fecha;
     
    f = FALSETRUE(fecha);
    cout <<f;
     return 0;
 }