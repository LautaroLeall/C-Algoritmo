#include <stdio.h>
    // Imprime si el N es Positivo Negativo Cero
int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    if (numero > 0) {
        printf("El numero es positivo\n");
    } else if (numero < 0) {
        printf("El numero es negativo\n");
    } else if (numero == 0) {
        printf("El numero es cero\n");
    }
    return 0;
}