eProducto pedirProducto()
{
    eProducto retorno;
    printf("pedir nombre\n");
    fflush(stdin);
    gets(retorno.nombre);
    printf("pedir fecha de vencimiento\n");
    fflush(stdin);
    gets(retorno.fechaDeVecimiento);
    printf("pedir provedor\n");
    fflush(stdin);
    gets(retorno.provedor);
    printf("pedir codigo de barra\n");
    fflush(stdin);
    gets(retorno.codigoDeBarra);
    printf("pedir precio\n");
    scanf("%s",&retorno.precio);
    return retorno;
}
void mostraProducto(eProducto mostrar)
{
    printf("1. %s\n",&mostrar.nombre);
    printf("2. %s\n",&mostrar.provedor);
    printf("3. %s\n",&mostrar.codigoDeBarra);
    printf("4. %s\n",&mostrar.fechaDeVecimiento);
    printf("5. %d\n",atoi(mostrar.precio));
}
void cargarArray(int tam ,eProducto listado[])
{
    int i;
    for(i = 0 ; i < tam ; i++)
    {
        listado[i] = pedirProducto();
    }
}
void mostrarArray(int tam,eProducto listado[])
{
    int i;
    for(i = 0 ; i < tam ; i++)
    {
        mostraProducto(listado[i]);
    }
}
