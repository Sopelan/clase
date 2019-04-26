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
    retorno.estado = OCUPADO;
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
        if(listado[i].estado == OCUPADO)
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
        listado[indice].estado = OCUPADO;
    }
    return indice;
}
int existeProducto(eProducto elProducto,eProducto listado[]);

int editarProducto(eProducto,eProducto[])
{
    int inice;
    indice = dameLugarLIbre(listado);
    if(listado != OCUPADO)
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
        listado[i].estado = LIBRE;
    }
}
void inicializarProductos(eProducto lista[], int tam)
{
    char codigoDeBarra[3][13] = {"78965412356" ," 457621874456 " , "4563154698"} ;
    char nombre[3][50] = {"agua" , "cap. espacio" ," Turron"};
    char fechaDeVecimiento[3][50] = {"22/10/2020" , "10/05/2019" , "15/05/2018"};
    char provedor[3][50] = {"coca cola", "bagley" , "arcor"};
    char precio[3][50] = {"50","42.95","9.52"};

    int i;
    for(i = 0; i < 3 ;i++)
    {
        strcpy(lista[i].codigoDeBarra , codigoDeBarra[i]);
        strcpy(lista[i].nombre, nombre);
        strcpy(lista[i].provedor,provedor);
        strcpy(lista[i].precio , precio);
        strcpy(lista[i].fechaDeVecimiento,fechaDeVecimiento);
        lista[i].estado = OCUPADO;
    }
}
