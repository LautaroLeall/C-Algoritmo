
#include <stdio.h>
//     Imprime la Tabla de un N hasta un N
int main() {
    int num1, num2, i;
    printf("INGRESE EL NUMERO QUE DESEA MULTIPLICAR: ");
    scanf("%d", &num1);
    printf("INGRESE EL NUMERO HASTA DONDE DESEA MULTIPLICARLO: ");
    scanf("%d", &num2);
    for (i = 1; i <= num2; ++i) {
        printf("%d * %d = %d \n", num1, i, num1 * i);
    }
    return 0;
}