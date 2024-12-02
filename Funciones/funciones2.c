#include <stdio.h>
    // Imprime SI Verifica si el Numero es PRIMO
void verificarPrimo();

int main() {
    verificarPrimo();
    return 0;
}

void verificarPrimo() {
    int numero, i, flag = 0;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &numero);
    for (i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            flag = 1;
        }    
    }
    if (flag == 1) {        
        printf("El numero no es primo\n");
    }
    else if (numero == 1) {
        printf("No es Considerado un Numero Primo\n");
    }
    else {
        printf("El numero es primo\n");
    }
}