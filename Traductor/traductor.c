#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        // NO ANDA
int main()
{
    FILE *archivoEntrada = fopen("/output/main.exe", "r");
    if (archivoEntrada == NULL)
    {
        printf("Error al abrir el archivo para lectura.\n");
        return 1;
    }

    char lineaOriginal[1000];
    char codigoTranspilado[1000] = "";


    while (fgets(lineaOriginal, sizeof(lineaOriginal),archivoEntrada) != NULL)
    {
        if (strstr(lineaOriginal, "#incluir") != NULL)
        {
            strcat(codigoTranspilado, "#include <stdio.h>\n");
        }
        else if (strstr(lineaOriginal, "entero principal()") != NULL)
        {
            strcat(codigoTranspilado, "int main()\n");
        }
        else if (strstr(lineaOriginal, "imprimirf") != NULL)
        {
            strcat(codigoTranspilado, "printf");
            strcat(codigoTranspilado, strchr(lineaOriginal, '('));
        }
        else if (strstr(lineaOriginal, "escanearf") != NULL)
        {
            strcat(codigoTranspilado, "scanf");
            strcat(codigoTranspilado, strchr(lineaOriginal, '('));
        }
        else if (strstr(lineaOriginal, "retornar") != NULL)
        {
            strcat(codigoTranspilado, "return ");
            strcat(codigoTranspilado, strchr(lineaOriginal, '0'));
        }
        else
        {
            strcat(codigoTranspilado, lineaOriginal);
        }
    }

    fclose(archivoEntrada );

    FILE *archivoSalida  = fopen("/output/main.exe", "w");
    if (archivoSalida  == NULL)
    {
        printf("Error al abrir el archivo para escritura.\n");
        return 1;
    }

    fputs(codigoTranspilado, archivoSalida );
    fclose(archivoSalida );

    printf("Transpilación completada.\n");

    return 0;
}
