#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    char* pLetra;
    pLetra = &letra;
    printf("Ingrese una letra\n");
    fflush(stdin);

    scanf("%c",pLetra);

    printf("la letra es: %c\n",letra);
    return 0;
}
