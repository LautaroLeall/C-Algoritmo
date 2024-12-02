#include <stdio.h>
    // Imprime una Operaciones Aritmeticas
        // Con Funciones
int calculadora (int a, int b);
int main() {
    int numero1, numero2, resultado;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &numero1);
    printf("INGRESE OTRO NUMERO: ");
    scanf("%d", &numero2);
    resultado = calculadora (numero1, numero2);
    printf("EL RESULTADO ES: %d", resultado);
    return 0;
}

int calculadora (int a, int b){
    int resultado;
    resultado = a + b;
            // UNO A LA VEZ
    // resultado = a - b;
    // resultado = a * b;
    // resultado = a / b;
    return resultado;
}
