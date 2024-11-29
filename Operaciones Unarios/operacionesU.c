#include <stdio.h>
    // Imprime Operadores Unarios
int main(){
    int numero;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &numero);    
     // Se puede uno a la vez
    int incremento = ++numero; 
//  int decremento = --numero;
    printf("EL INCREMENTO DEL N INGRESADO ES: %d \n", incremento);
//  printf("EL DECREMENTO DEL N INGRESADO ES: %d",  decremento);
    return 0;
}