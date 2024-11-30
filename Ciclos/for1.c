#include <stdio.h>
    // Imprime los Numeros q hay entre (2N°)
int main(){
    int num1 , num2 , i;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &num1);
    printf("INGRESE OTRO NUMERO: ");
    scanf("%d", &num2);
    for(i = num1 ; i <= num2; ++i){
        printf("  %d  ", i);
    }
    return 0;
}