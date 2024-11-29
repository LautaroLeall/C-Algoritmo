#include <stdio.h>
    // Imprime Numeros Pares (entre 2N°)
int main() {
    int num1, num2 ;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &num1);
    printf("INGRESE OTRO NUMERO: ");
    scanf("%d", &num2);
    do{
        printf("%d \n", 2*  num1);
        ++num1;
    }while(2 * num1 <= num2);
    return 0;
}