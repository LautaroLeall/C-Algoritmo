#include <stdio.h>
    // Imprime Operadores con numero entero
int main(){
    int numero1, numero2;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &numero1);
    printf("INGRESE OTRO NUMERO: ");
    scanf("%d", &numero2);
    int suma = numero1 + numero2;
    int resta = numero1 - numero2 ;
    int multiplicacion = numero1 * numero2 ;
    int division = numero1 / numero2;
    int modulo = numero1 % numero2;
    printf("LA SUMA ES: %d \n", suma);
    printf("LA RESTA ES: %d \n", resta);
    printf("LA MULTIPLICACION ES: %d \n", multiplicacion);
    printf("LA DIVISION ES: %d \n", division);
    printf("EL MODULO ES: %d", modulo);
    return 0;
}