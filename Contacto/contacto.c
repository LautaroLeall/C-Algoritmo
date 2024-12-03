#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    // Imprime una "Agenda de Contactos"
        //* Estructura de Contacto
typedef struct {
    char nombre[50]; 
    char telefono[15];
} Contacto; 

Contacto contactos[100];
int cantidad_contactos = 0;

void imprimir_error(const char *mensaje) {
    printf("Error: %s\n", mensaje);
}

void imprimir_exito(const char *mensaje) {
    printf("Exito: %s\n", mensaje);
}

void agregar_contacto() {
    if (cantidad_contactos < 100) {
        char nombre[50];
        char telefono[15];

        printf("Ingrese el nombre del contacto: ");
        fgets(nombre, 50, stdin);
        nombre[strcspn(nombre, "\n")] = 0;

        printf("Ingrese el telefono del contacto: ");
        fgets(telefono, 15, stdin);
        telefono[strcspn(telefono, "\n")] = 0;

        if (strlen(nombre) > 0 && strlen(telefono) > 0) {
            strcpy(contactos[cantidad_contactos].nombre, nombre);
            strcpy(contactos[cantidad_contactos].telefono, telefono);
            cantidad_contactos++;
            imprimir_exito("Contacto agregado exitosamente.");
        } else {
            imprimir_error("Nombre o telefono vacio.");
        }
    } else {
        imprimir_error("La agenda esta llena. No se pueden agregar mas contactos.");
    }
}

void mostrar_contactos() {
    if (cantidad_contactos == 0) {
        printf("No hay contactos en la agenda.\n");
        return;
    }
    printf("\n--- Lista de Contactos ---\n");
    for (int i = 0; i < cantidad_contactos; i++) {
        printf("%d. %s - %s\n", i + 1, contactos[i].nombre, contactos[i].telefono);
    }
    printf("---------------------------\n");
}

void buscar_contacto() {
    char nombre[50];
    printf("Ingrese el nombre del contacto a buscar: ");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = 0;

    for (int i = 0; i < cantidad_contactos; i++) {
        if (strcmp(contactos[i].nombre, nombre) == 0) {
            printf("Contacto encontrado: %s - %s\n", contactos[i].nombre, contactos[i].telefono);
            return;
        }
    }
    printf("Contacto no encontrado.\n");
}

void modificar_contacto() {
    char nombre[50];
    printf("Ingrese el nombre del contacto a modificar: ");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = 0;

    for (int i = 0; i < cantidad_contactos; i++) {
        if (strcmp(contactos[i].nombre, nombre) == 0) {
            char nuevo_nombre[50];
            char nuevo_telefono[15];

            printf("Ingrese el nuevo nombre (dejar en blanco para no cambiar): ");
            fgets(nuevo_nombre, 50, stdin);
            nuevo_nombre[strcspn(nuevo_nombre, "\n")] = 0;

            printf("Ingrese el nuevo teléfono (dejar en blanco para no cambiar): ");
            fgets(nuevo_telefono, 15, stdin);
            nuevo_telefono[strcspn(nuevo_telefono, "\n")] = 0;

            if (strlen(nuevo_nombre) > 0) {
                strcpy(contactos[i].nombre, nuevo_nombre);
            }
            if (strlen(nuevo_telefono) > 0) {
                strcpy(contactos[i].telefono, nuevo_telefono);
            }
            imprimir_exito("Contacto modificado exitosamente.");
            return;
        }
    }
    imprimir_error("Contacto no encontrado.");
}

void eliminar_contacto() {
    char nombre[50];
    printf("Ingrese el nombre del contacto a eliminar: ");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = 0;

    for (int i = 0; i < cantidad_contactos; i++) {
        if (strcmp(contactos[i].nombre, nombre) == 0) {
            for (int j = i; j < cantidad_contactos - 1; j++) {
                contactos[j] = contactos[j + 1];
            }
            cantidad_contactos--;
            imprimir_exito("Contacto eliminado exitosamente.");
            return;
        }
    }
    imprimir_error("Contacto no encontrado.");
}

void mostrar_menu() {
    printf("\n--- Agenda de Contactos ---\n");
    printf("1. Agregar contacto\n");
    printf("2. Mostrar contactos\n");
    printf("3. Buscar contacto\n");
    printf("4. Modificar contacto\n");
    printf("5. Eliminar contacto\n");
    printf("6. Salir\n");
    printf("---------------------------\n");
}

int main() {
    int opcion;

    do {
        mostrar_menu();
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar(); 

        switch (opcion) {
            case 1:
                agregar_contacto();
                break;
            case 2:
                mostrar_contactos();
                break;
            case 3:
                buscar_contacto();
                break;
            case 4:
                modificar_contacto();
                break;
            case 5:
                eliminar_contacto();
                break;
            case 6:
                printf("Saliendo de la agenda.\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 6);

    return 0;
}