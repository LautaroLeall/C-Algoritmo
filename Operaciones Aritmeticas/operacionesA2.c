#include <stdio.h>
    // Imprime Operadores con numero decimal
int main(){
    float numero1, numero2;
    printf("INGRESE UN NUMERO: ");
    scanf("%f", &numero1);
    printf("INGRESE OTRO NUMERO: ");
    scanf("%f", &numero2);
    float suma = numero1 + numero2;
    float resta = numero1 - numero2 ;
    float multiplicacion = numero1 * numero2 ;
    float division = numero1 / numero2;
    printf("LA SUMA ES: %f \n", suma);
    printf("LA RESTA ES: %f \n", resta);
    printf("LA MULTIPLICACION ES: %f \n", multiplicacion);
    printf("LA DIVISION ES: %f", division);
    return 0;
}