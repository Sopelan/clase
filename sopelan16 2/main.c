#include <stdio.h>
#include <stdlib.h>
void mostrarArray(int*, int);
int main()
{
    int variable[5] = {5,9,7,8,1};
    //int* puntero;
    //puntero = variable;
    mostrarArray(variable , 5);
/*
    printf("%d\n",puntero);//variable
    printf("%d\n",puntero+0);//&variable [0]
    printf("%d\n",puntero+1);//&variable [1]
    printf("%d\n\n\n",puntero+2);//&variable [2]

    printf("%d\n",*(puntero+0));//&variable [0]
    printf("%d\n",*(puntero+1));//&variable [1]
    printf("%d\n",*(puntero+2));//&variable [2]
    */
    return 0;
}
void mostrarArray(int* pArray , int tam)
{
    int i;
    for(i = 0 ; i < tam ; i++)
    {
        printf("%d\n",*(pArray + i));
    }
}
