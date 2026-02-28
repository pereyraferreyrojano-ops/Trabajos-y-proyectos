#include <iostream>
#include <string>
#include <cstring>
#include <limits>

using namespace std;

typedef struct {
    int id;
    char titulo[50];
    char autor[50];
    int anio;
} Libro;

// Prototipos de funciones
void altaLibro(Libro libros[], int* cantidad);
void bajaLibro(Libro libros[], int* cantidad);
void modificarLibro(Libro libros[], int cantidad);
void buscarLibro(Libro libros[], int cantidad);
void mostrarLibros(Libro libros[], int cantidad);
void limpiarBuffer();

int main() {
    Libro libros[100];
    int cantidad = 0;
    int opcion;

    do {
        cout << "\n--- Catalogo de Libros ---\n";
        cout << "1. Agregar libro\n";
        cout << "2. Eliminar libro\n";
        cout << "3. Modificar libro\n";
        cout << "4. Buscar libro\n";
        cout << "5. Mostrar todos los libros\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        
        // Validación de entrada para el menú
        if (!(cin >> opcion)) {
            cout << "Error: Ingrese un numero valido.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch(opcion) {
            case 1: altaLibro(libros, &cantidad); break;
            case 2: bajaLibro(libros, &cantidad); break;
            case 3: modificarLibro(libros, cantidad); break;
            case 4: buscarLibro(libros, cantidad); break;
            case 5: mostrarLibros(libros, cantidad); break;
            case 0: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion invalida. Intente nuevamente.\n";
        }
    } while(opcion != 0);

    return 0;
}

// Función para limpiar el buffer de entrada
void limpiarBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void altaLibro(Libro libros[], int* cantidad) {
    if (*cantidad >= 100) {
        cout << "Error: No se pueden agregar mas libros (limite alcanzado).\n";
        return;
    }
    
    cout << "Ingrese ID: ";
    if (!(cin >> libros[*cantidad].id)) {
        cout << "Error: ID invalido.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }
    
    limpiarBuffer();
    
    cout << "Ingrese titulo: ";
    cin.getline(libros[*cantidad].titulo, 50);
    
    cout << "Ingrese autor: ";
    cin.getline(libros[*cantidad].autor, 50);
    
    cout << "Ingrese año: ";
    if (!(cin >> libros[*cantidad].anio)) {
        cout << "Error: Año invalido.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }
    
    (*cantidad)++;
    cout << "Libro agregado exitosamente.\n";
}

void bajaLibro(Libro libros[], int* cantidad) {
    if (*cantidad == 0) {
        cout << "No hay libros para eliminar.\n";
        return;
    }
    
    int id, encontrado = 0;
    cout << "Ingrese ID a eliminar: ";
    
    if (!(cin >> id)) {
        cout << "Error: ID invalido.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }
    
    for(int i = 0; i < *cantidad; i++) {
        if(libros[i].id == id) {
            for(int j = i; j < *cantidad - 1; j++)
                libros[j] = libros[j+1];
            (*cantidad)--;
            encontrado = 1;
            cout << "Libro eliminado exitosamente.\n";
            break;
        }
    }
    
    if(!encontrado) {
        cout << "Libro no encontrado.\n";
    }
}

void modificarLibro(Libro libros[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay libros para modificar.\n";
        return;
    }
    
    int id, i;
    cout << "Ingrese ID del libro a modificar: ";
    
    if (!(cin >> id)) {
        cout << "Error: ID invalido.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }
    
    for(i = 0; i < cantidad; i++) {
        if(libros[i].id == id) {
            limpiarBuffer();
            
            cout << "Nuevo titulo: ";
            cin.getline(libros[i].titulo, 50);
            
            cout << "Nuevo autor: ";
            cin.getline(libros[i].autor, 50);
            
            cout << "Nuevo año: ";
            if (!(cin >> libros[i].anio)) {
                cout << "Error: Año invalido.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return;
            }
            
            cout << "Libro modificado exitosamente.\n";
            return;
        }
    }
    cout << "Libro no encontrado.\n";
}

void buscarLibro(Libro libros[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay libros para buscar.\n";
        return;
    }
    
    char titulo[50];
    limpiarBuffer();
    
    cout << "Ingrese titulo a buscar: ";
    cin.getline(titulo, 50);
    
    for(int i = 0; i < cantidad; i++) {
        if(strcmp(libros[i].titulo, titulo) == 0) {
            cout << "\nID: " << libros[i].id << "\n";
            cout << "Titulo: " << libros[i].titulo << "\n";
            cout << "Autor: " << libros[i].autor << "\n";
            cout << "Año: " << libros[i].anio << "\n";
            return;
        }
    }
    cout << "Libro no encontrado.\n";
}

void mostrarLibros(Libro libros[], int cantidad) {
    if(cantidad == 0) {
        cout << "No hay libros cargados.\n";
        return;
    }
    
    cout << "\n--- Lista de Libros ---\n";
    for(int i = 0; i < cantidad; i++) {
        cout << "ID: " << libros[i].id << "\n";
        cout << "Titulo: " << libros[i].titulo << "\n";
        cout << "Autor: " << libros[i].autor << "\n";
        cout << "Año: " << libros[i].anio << "\n";
        cout << "------------------------\n";
    }
}
