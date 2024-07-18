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

int main() {
    // Crear una instancia de Libro
    Libro libro1;
    
    // Asignar valores a los atributos del libro
    libro1.codigo = "001";
    libro1.titulo = "Cien Años de Soledad";
    libro1.autor = "Gabriel Garcia Marquez";
    libro1.precio = 20;
    
    // Imprimir los detalles del libro
    cout << "Codigo: " << libro1.codigo << endl;
    cout << "Titulo: " << libro1.titulo << endl;
    cout << "Autor: " << libro1.autor << endl;
    cout << "Precio: " << libro1.precio << endl;
    
    return 0;
}
