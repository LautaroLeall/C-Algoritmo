#include <stdio.h>
    // Imprime SI Verifica si el Numero es PAR
void verificarPar();

int main() {
    verificarPar();
    return 0;
}

void verificarPar() {
    int numero, flag = 0;
    printf("INGRESE UN NUMERO: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
            flag = 1;    
    }
    if (flag == 0) {        
        printf("El numero %d no es PAR\n", numero);
    }
    else {
        printf("El numero %d es PAR\n", numero);
    }
}