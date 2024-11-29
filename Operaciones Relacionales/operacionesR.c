#include <stdio.h>
        // Imprime Operadores Relacionales
    // Resultados Binarios 1=Verdadero / 0=Falso
int main(){
    int numero1, numero2;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &numero1);
    printf("INGRESE OTRO NUMERO: ");
    scanf("%d", &numero2);
    int igualdad = (numero1 == numero2);
    int desigualdad = (numero1 != numero2);
    int mayor = (numero1 > numero2);
    int menor = (numero1 < numero2);
    int mayorigual = (numero1 >= numero2);
    int menorigual = (numero1 <= numero2);
    printf("LA IGUALDAD ES: %d \n", igualdad);
    printf("LA DESIGUALDAD ES: %d \n", desigualdad);
    printf("EL MAYOR ES: %d \n", mayor);
    printf("EL MENOR ES: %d \n", menor);
    printf("EL MAYOR O IGUAL ES: %d \n", mayorigual);
    printf("EL MENOR O IGUAL ES: %d", menorigual);
    return 0;
}