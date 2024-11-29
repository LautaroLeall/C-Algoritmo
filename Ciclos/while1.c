#include <stdio.h>
    // Imprime los Numeros q hay entre (2N°)
int main() {
    int numero1, numero2;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &numero1);
    printf("INGRESE OTRO NUMERO: ");
    scanf("%d", &numero2);
    while (numero1 <= numero2) {
        printf("%d \n", numero1);
        ++numero1;
    }
    return 0;
}