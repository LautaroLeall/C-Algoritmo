#include <stdio.h>
    // Imprime Valor de Notas
int main() {
    int nota;
    printf("INGRESE LA NOTA: ");
    scanf("%d", &nota);
    if (nota == 10) {
        printf("APROBADO PERFECTO");
    }else if (nota >= 8) {
        printf("APROBADO MUY BUENO");
    }else if (nota >= 6){
        printf("APROBADO BUENO");
        // PARA EL else NO LLEVA "CONDICION"
    }else{
        printf("DESAPROBADO");
    }
    return 0;
}