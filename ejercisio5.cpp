#include "iostream"

using namespace std;

int room(int efe[199])
{

for (int i = 199; i >= 1; i-= 2 )
    {
     efe[i] = i;
     cout << efe[i] <<(", ");
    }

}

int main(void)
{

int efe[199];
int f;

cout<<("\n...Primeros 100 impares de mayor a menor...")<<endl;

room(efe);

return 0;

}