#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

void MostrarPersonas (char *V[]);
char* BuscarNombrePorClave (char *V[], char *pclave);
void BuscarNombrePorId (char *V[], int id);

int main () {
    char *V[5], buffer[50];
    int opcion, id;

    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese el nombre %d: ", i + 1);
        scanf("%s", buffer);
        fflush(stdin);
        V[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        V[i] = strcpy(V[i], buffer);
    }

    MostrarPersonas(V);

    do
    {
        printf("__________MENU__________\n");
        printf("1. Buscar por clave\n");
        printf("2. Buscar por id\n");
        printf("3. Salir\n");
        printf("-Ingrese una opcion: ");

        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("Ingrese la clave a buscar: ");
                scanf("%s", buffer);
                puts(BuscarNombrePorClave(V, buffer));
                break;
            case 2:
                printf("Ingrese el id a buscar:");
                scanf("%d", &id);
                BuscarNombrePorId(V, id);
                break;
            default:
                printf("Finalizando...");
                break;
        }

    } while (opcion != 3 && opcion > 0 && opcion < 3);
    

    for (int i = 0; i < MAX; i++)
    {
        free(V[i]);
    }
    
    return 0;
}

void MostrarPersonas (char *V[]) {
    printf("-->Nombres ingresados:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("-%s\n", V[i]);
    }
}

char* BuscarNombrePorClave (char *V[], char *pclave) {
    for (int i = 0; i < 5; i++)
    {
        if (strstr(V[i],pclave) != NULL)
        {
            return V[i];
        }
    }

    return "-1";
}

void BuscarNombrePorId (char *V[], int id) {
    int aux;
    aux = id - 1;
    if (aux < 0 || aux > 4)
    {
        printf("-->No se encontro el valor buscado");
    }
    else
    {
        printf("-->Nombre %d solicitado: %s\n",id,V[aux]);
    }
}