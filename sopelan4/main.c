#include <stdio.h>
#include <stdlib.h>
int pedirOpcion(char texto[]);
int main()
{
    int opcion;
    char seguir ='s';
    do
    {
        opcion=pedirOpcion("1.alta\n2.baja\n3.modificacion\n4.informes\n5.salir\nelija una opcion\n");
        switch(opcion)
        {
            case 1:
                printf("estoy dando de alta\n");
                break;
            case 2:
                printf("estoy dando de baja\n");
                break;
            case 3:
                printf("estoy modificando\n");
                break;
            case 4:
                printf("estoy informado\n");
                break;
            case 5:
                seguir='n';
                break;
            default:
                printf("opcion incorrecta\n");
                break;
        }
        system("pause");
        system("cls");
    }while(seguir=='s');
    return 0;
}
int pedirOpcion(char texto[])
{
    int opcion;
    printf("%s",texto);
    scanf("%d",&opcion);
    return opcion;
}
