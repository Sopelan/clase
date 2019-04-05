void mostrarArray(int array [] , int tam)
{
    int i;
    //printf("dirreccion del array %d ",array)
    for(i = 0; i < tam ; i++)
    {
        printf("%d\n", array[i]);
    }
}
void cargarArray( int array [],int tam )
{
    int i;
    for(i = 0; i < tam; i++)
    {
        printf("ingrese un numero : ");
        scanf("%d",&array[i]);
    }
}
int buscarVAlor(int array[], int tam, int valor)
{
    int indice = -1;
    int i;
    for(i = 0; i < tam ; i++)
    {
        if(array[i] == valor)
        {
            indice = 1;
            break;
        }
    }

    return indice;
}
