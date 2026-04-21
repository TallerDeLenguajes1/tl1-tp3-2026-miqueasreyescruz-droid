#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

void MostrarPersonas (char *V[]);

int main () {
    char *V[5], buffer[50];

    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese el nombre %d: ", i + 1);
        scanf("%s", buffer);
        fflush(stdin);
        V[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        V[i] = strcpy(V[i], buffer);
    }

    MostrarPersonas(V);

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