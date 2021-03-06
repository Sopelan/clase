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
    printf("6. %d\n",mostrar.estado);
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
int insertProducto(int tam,eProducto listado[])
{
    int indice;
    indice = dameLugarLibre(listado , tam);
    if(indice != OCUPADO)
    {
        listado[indice] = pedirProducto();
    }
}

int dameLugarLibre(eProducto listado[],int tam)
{
    int i;
    int index = OCUPADO;

    for(i = 0 ; i<tam ; i++)
    {
        if(listado[i].estado == LIBRE)
        {
            index = i;
            break;
        }

    }
    return index;
}
int borrarProducto(int tam,eProducto listado[])
{
    int i;
    char codigo[50];
    int loEncontro = 0;
    printf("ingrese el cofigo de barra: ");
    fflush(stdin);
    gets(codigo);
    for(i = 0; i < tam ; i++)
    {
        if(strcmp(listado[i].codigoDeBarra , codigo) == 0)
        {
            listado[i].estado = LIBRE;
            loEncontro = 1;
        }

    }
    if(loEncontro != 1)
        {
            printf("codigo inexistente");
        }
}




int editarProducto(int tam ,eProducto listado[])
{
    int i;
    char codigo[50];
    int loEncontro = 0;
    printf("ingrese el cofigo de barra: ");
    fflush(stdin);
    gets(codigo);
    for(i = 0; i < tam ; i++)
    {
        if(strcmp(listado[i].codigoDeBarra , codigo) == 0)
        {
            printf("pedir precio nuevo\n");
            fflush(stdin);
            gets(listado[i].precio);
            loEncontro = 1;
        }

    }
    if(loEncontro != 1)
        {
            printf("codigo inexistente");
        }
}
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
void construirArray(int tam , eProducto listado[])
{
    int i;
    for(i = 0; i < tam ;i++)
    {
        listado[i].estado == LIBRE;
    }
}


