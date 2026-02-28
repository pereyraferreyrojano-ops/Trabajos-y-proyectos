// MultiploDeTres.c
// Programa que verifica si un número es múltiplo de 3

#include <stdio.h>

int main() {
    int numero; // Variable para guardar el número ingresado

    // Pedimos al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Verificamos si el número es múltiplo de 3
    if (numero % 3 == 0) {
        printf("El número %d es múltiplo de 3\n", numero);
    } else {
        printf("El número %d NO es múltiplo de 3\n", numero);
    }

    return 0;
}