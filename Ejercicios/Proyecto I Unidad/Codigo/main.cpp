#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int opt;
void juegos()
{
   
   cout << "***************" << endl;
   cout << "Menu de Juegos" << endl;
   cout << "***************" << endl; 

   cout << "1  -  StarShip" << endl;
   cout << "2  -  Snake" << endl;
   cout << "Ingrese un numero del menu para seleccionar un juego:" << endl;
   cin >> opt;
}
int main(int argc, char const *argv[])
{
    
   system("cls");
    
   juegos();
  

   switch (opt) {
    case (1):
      starShip();
      break;        
    case (2):
      snake();
      default:
    cout << "No selecciono uno de los juegos" << endl;
    break;
    }
   
     return 0;


}


