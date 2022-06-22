#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

void juegos()
{
cout << "***************";
cout << "Menu de Juegos";
cout << "***************";
}
int main(int argc, char const *argv[])
{
    system("cls");

    int opt;
   
   cout << "Selecione: ";
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


