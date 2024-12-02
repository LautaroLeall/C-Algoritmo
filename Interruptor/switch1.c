#include <stdio.h>
    // Imprime una calculadora 
        // de 4 operaciones basicas (suma, resta, multiplicacion, division)
int main() {
    float num1, num2;
    int opcion;
    printf("INGRESE UN NUMERO: \n");
    scanf("%f", &num1);
    printf("INGRESE OTRO NUMERO: \n");
    scanf("%f", &num2);
    printf("INGRESE UNA OPCION: \n");
    printf("1. SUMA \n");
    printf("2. RESTA \n");
    printf("3. MULTIPLICACION \n");
    printf("4. DIVISION \n");
    scanf("%d", &opcion);
    switch (opcion) {
        case 1:
            printf("LA SUMA ES %.2f + %.2f = %.2f \n",num1, num2, num1 + num2);
            break;
        case 2:
            printf("LA RESTA ES %.2f - %.2f = %.2f \n",num1, num2, num1 - num2);
            break;
        case 3:
            printf("LA MULTIPLICACION ES %.2f x %.2f = %.2f \n",num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("LA DIVISION ES %.2f / %.2f = %.2f \n",num1, num2, num1 / num2);
                break;
            }
            else {
                printf("ERROR: NO SE PUEDE DIVIDIR POR CERO \n");
                break;
            }
            // SALIDA DE EMERGENCIA
        default:
            printf("OPCION INVALIDA \n");
            break;
    }
    return 0;
}