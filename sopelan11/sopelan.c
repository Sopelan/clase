eProducto pedirProducto()
{
    eProducto retorno;
    printf("pedir nombre\n");
    fflush(stdin);
    gets(retorno.nombre);
    printf("pedir fecha de vencimiento\n");
    fflush(stdin);
    gets(retorno.fechaDeVecimiento);
    /*printf("pedir provedor\n");
    fflush(stdin);
    gets(retorno.provedor);*/
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
 //   printf("2. %s\n",&mostrar.provedor);
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
void inicializarProductos(eProducto lista[])
{
    char codigoDeBarra[10][13] = {"123","143","232","654","545","314","132","859","564","453"} ;
    char nombre[10][50] = {"infinia","action power","vipower","infinia disel", "action disel","zeto disel","super","acton super","normal","querosen"} ;
    char fechaDeVecimiento[10][50] = {"1/2020","2/2020","3/2020","4/2020","10/2020","8/2020","7/2020","5/2020","6/2020","12/2020"};
    char precio[10][50] = {"42","43","44","40","41","42","35","36","37","38"};
    int iDproveedor[10] = {1,2,3,1,2,3,1,2,3,1};

    int i;
    for(i = 0; i < 10 ;i++)
    {
        strcpy(lista[i].codigoDeBarra , codigoDeBarra[i]);
        strcpy(lista[i].nombre, nombre);
//        strcpy(lista[i].iDproveedor,provedor);
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
void inicializarProvedor(eProvedor lista[])
{
    int id[3] = {1 , 2 , 3};
    char descripcion[3][50] = {"petrolera" ,"petrolera" , "petrolera"};
    char localidad[3][50] = {"avellaneda" , "bahia blanca" , "rio negro"};
    int cuit[3] = {4444 , 5555 , 6666} ;
    char dueno[3][50] = { "YPF", "axion" , " shell" };
    int i;
    for(i = 0; i < 3 ;i++)
    {
        strcpy(lista[i].descripcion , descripcion);
        strcpy(lista[i].localidad,localidad);
        strcpy(lista[i].dueno , dueno);
        lista[i].id = id ;
        lista[i].cuit = cuit;
    }
}
void mostrarTodo(eProvedor provedor[],eProducto producto[])
{
    int i;
    int j;
    int k;
    int indice ;
    for(k = 0 ; k < 3 ; k++)
    {
       for(i = 0 ; i < 10 ; i = i + (3 + k))
        {
            printf("\n%d\n",provedor[k].id);
            printf("%s\n",provedor[k].descripcion);
            printf("%s\n",provedor[k].localidad);
            printf("%d\n",provedor[k].cuit);
            printf("%s\n",provedor[k].dueno);
        }
    }
}

