#include <stdio.h>
    // Imprime la suma de 4 Numeros 
        // Si se Ingresa un Negativo se Detiene
            // Imprime la Suma de los Numeros Positivos
int main(){
    int num, suma = 0, i;
    for (i = 1; i <= 4; ++i){
        printf("\n INGRESE EL NUMERO_%d: " , i);
        scanf("%d", &num);
        if(num < 0){
            printf("\n UNOS DE LOS NUMEROS INGRESADOS SON NEGATIVOS \n");
            break;
        }
        else{
        suma += num;    
        printf("\n LA SUMA ES: %d \n", suma);     
        }
    }             
    return 0;
}