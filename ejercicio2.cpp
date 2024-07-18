#include <iostream>
#include <string>

using namespace std;

// Tipo struct definido por el usuario
struct Libro
{
    string codigo;
    string titulo;
    string autor;
    int precio;
};

void AsignarLibros(Libro libros[], int total)
{
    libros[0].codigo = "001";
    libros[0].titulo = "Un grito desesperado";
    libros[0].autor = "Carlos Cuauhtemoc Sánchez";
    libros[0].precio = 10;

    libros[1].codigo = "002";
    libros[1].titulo = "Las cruces sobre el agua";
    libros[1].autor = "Joaquin Gallegos Lara";
    libros[1].precio = 12;

    libros[2].codigo = "003";
    libros[2].titulo = "El Guaraguao";
    libros[2].autor = "Joaquin Gallegos Lara";
    libros[2].precio = 8;

    libros[3].codigo = "004";
    libros[3].titulo = "A la costa";
    libros[3].autor = "Luis A. Martínez";
    libros[3].precio = 11;

    libros[4].codigo = "005";
    libros[4].titulo = "Cien Años de Soledad";
    libros[4].autor = "Gabriel Garcia Marquez";
    libros[4].precio = 15;

    libros[5].codigo = "006";
    libros[5].titulo = "Don Quijote de la Mancha";
    libros[5].autor = "Miguel de Cervantes";
    libros[5].precio = 18;

    libros[6].codigo = "007";
    libros[6].titulo = "El Principito";
    libros[6].autor = "Antoine de Saint-Exupéry";
    libros[6].precio = 10;
}

int main() {
    const int totalLibros = 7;
    Libro libros[totalLibros];

    AsignarLibros(libros, totalLibros);

    for (int i = 0; i < totalLibros; ++i) {
        cout << "Codigo: " << libros[i].codigo << endl;
        cout << "Titulo: " << libros[i].titulo << endl;
        cout << "Autor: " << libros[i].autor << endl;
        cout << "Precio: " << libros[i].precio << endl;
        cout << "----------------------" << endl;
    }

    return 0;
}
