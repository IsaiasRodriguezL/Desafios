/******************************************************************************
Arbolconcapas
*******************************************************************************/
#include <stdio.h>

void piramideArbol(int);
void nivel(int,int);
void tronco (int,int);


int arbolconcapas()
{
    int AnchoPino;
    int alturaTronco;
    int capa;
    printf("De cuanto quieres el ancho del arbol\n");
    scanf("%d",&AnchoPino);
    printf("De cuanto la altura?\n");
    scanf("%d",&alturaTronco);
    printf("De cuantas capas\n");
    scanf("%d",&capa);
    piramideArbol(AnchoPino);
    nivel(capa,AnchoPino);
    tronco (AnchoPino,alturaTronco);
    return 0;
}

void piramideArbol (int ancho){
    int x,y,z;

    for (x=1;x<=ancho;x++)
    {
        for(z=x;z<=ancho;z++)
        printf(" ");
        for(y=1;y<=x;y++)
        printf("**");
        printf("\n");
    }
}

void tronco (int espacio,int ancho){
    for (int x = 0; x<ancho; x++){
        for(int y = 0; y<espacio; y++){
            printf(" ");
        }
        printf("||\n");
    }
}

void nivel (int capa,int anchoOriginal){
    int x,y,z,a;
    for(a = 1; a<capa; a++)
    for (x=a*2;x<=anchoOriginal;x++)
    {
        for(z=x;z<=anchoOriginal;z++)
        printf(" ");
        for(y=1;y<=x;y++)
        printf("**");
        printf("\n");
    }
}