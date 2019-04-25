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
    fflush(stdin);
    gets(retorno.precio);
    return retorno;
}
void mostraProducto(eProducto mostrar)
{
    printf("1. %s\n",&mostrar.nombre);
    printf("2. %s\n",&mostrar.provedor);
    printf("3. %s\n",&mostrar.codigoDeBarra);
    printf("4. %s\n",&mostrar.fechaDeVecimiento);
    printf("5. %d\n",atoi(mostrar.precio));
    printf("6. %d\n",atoi(mostrar.estado));
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
/*int insertProducto(eProducto,eProducto[]);
int dameLugarLIbre(eProducto[]);
int borrarProducto(eProducto elProducto,eProducto listado[])
{
    int indice;
    indice = existeProducto(elProducto,listado);
    if(listado != -1)
    {
        listado[indice].estado = -1;
    }
    return indice;
}
int existeProducto(eProducto elProducto,eProducto listado[]);

int editarProducto(eProducto,eProducto[])
{
    int inice;
    indice = dameLugarLIbre(listado);
    if(listado != -1)
    {
        listado[indice] = elProducto;
    }
    return indice;
}*/
void cargarEnCero(eProducto listado[] , int tam)
{
    int i;
    for(i = 0 ; i < tam ; i++)
    {
        listado[i].estado = '0';
    }
}
