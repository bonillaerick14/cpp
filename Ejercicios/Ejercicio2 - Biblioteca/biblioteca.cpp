#include <iostream>

using namespace std;

string libros[2][2];

void cargarlibros() {
    libros[0][0] = "Algoritmos";
    libros[0][1] = "Algoritmos y Progrmacion (Guia para Docentes)";

    libros[1][0] = "Base de datos";
    libros[1][1] = "Apuntes de base de datps";

}

int main(int argc, char const *argv[])
{
    cargarlibros ();

    for (int  i = 0; i < 2; i++)
    {
        cout << libros[i][1];
    }
    
    return 0;
}
