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
    for (int i = 0; i < total; ++i)
    {
        cout << "Ingrese el codigo del libro " << i + 1 << ": ";
        cin >> libros[i].codigo;
        cin.ignore(); // Limpiar el buffer de entrada

        cout << "Ingrese el titulo del libro " << i + 1 << ": ";
        getline(cin, libros[i].titulo);

        cout << "Ingrese el autor del libro " << i + 1 << ": ";
        getline(cin, libros[i].autor);

        cout << "Ingrese el precio del libro " << i + 1 << ": ";
        cin >> libros[i].precio;
        cin.ignore(); // Limpiar el buffer de entrada

        cout << "----------------------" << endl;
    }
}

void ImprimirLibros(Libro libros[], int total)
{
    for(int k = 0; k < total; k++)
    {
        cout << "Codigo: " << libros[k].codigo << endl;
        cout << "Titulo: " << libros[k].titulo << endl;
        cout << "Autor: " << libros[k].autor << endl;
        cout << "Precio: " << libros[k].precio << endl;
        cout << "----------------------" << endl;
    }
}

void OrdenarLibrosPorPrecio(Libro libros[], int total)
{
    for (int i = 0; i < total - 1; ++i)
    {
        for (int j = 0; j < total - i - 1; ++j)
        {
            if (libros[j].precio < libros[j + 1].precio)
            {
                // Intercambiar libros[j] y libros[j + 1]
                Libro temp = libros[j];
                libros[j] = libros[j + 1];
                libros[j + 1] = temp;
            }
        }
    }
}

int main() {
    int totalLibros;

    cout << "Ingrese el numero total de libros: ";
    cin >> totalLibros;
    cin.ignore(); // Limpiar el buffer de entrada

    Libro* libros = new Libro[totalLibros]; // Reservar memoria dinámica para los libros

    AsignarLibros(libros, totalLibros);

    cout << "\nLibros ingresados:" << endl;
    ImprimirLibros(libros, totalLibros);

    OrdenarLibrosPorPrecio(libros, totalLibros);

    cout << "\nLibros despues de ordenar por precio de mayor a menor:" << endl;
    ImprimirLibros(libros, totalLibros);

    delete[] libros; // Liberar la memoria dinámica

    return 0;
}
