#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    
    system("cls");
    
   int opt;
   cout << "***************" << endl;
   cout << "Menu de Juegos" << endl;
   cout << "***************" << endl; 

   cout << "StarShip" << endl;
   cout << "Snake" << endl;
   cout << "Ingrese un numero del menu para seleccionar un juego:" << endl;
   cin >> opt;

    switch (opt)
    {
    case (1):
         starShip();
        break;
        
    case (2):
     snake();
     default:

        break;
    }
   
    
     
    return 0;


}


