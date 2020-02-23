
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void piramideArbol2(int);
void nivel2(int,int);
void tronco2 (int,int);


int arbolconhojasaleatorias()
{
    srand(time(NULL));
    int AnchoPino2;
    int alturaTronco2;
    int capa2;
    printf("De cuanto quieres el ancho del arbol\n");
    scanf("%d",&AnchoPino2);
    printf("De cuanto la altura?\n");
    scanf("%d",&alturaTronco2);
    printf("De cuantas capas\n");
    scanf("%d",&capa2);
    piramideArbol2(AnchoPino2);
    nivel2(capa2,AnchoPino2);
    tronco2(AnchoPino2,alturaTronco2);
    return 0;
}

void piramideArbol2 (int ancho){
    int x,y,z;
    char figura[1];
    
    int r;
    for (x=1;x<=ancho;x++)
    {
        
        for(z=x;z<=ancho;z++)
        printf(" ");
        for(y=1;y<=x;y++){
        r= (rand( )% (4)) +35;
        figura[0] = r;
        printf("*%s",figura);}
        printf("\n");
    }
}

void tronco2 (int espacio,int ancho){
    for (int x = 0; x<ancho; x++){
        for(int y = 0; y<espacio; y++){
            printf(" ");
        }
        printf("||\n");
    }
}

void nivel2 (int capa,int anchoOriginal){
    int x,y,z,a,r;
    char figura[1];
    for(a = 1; a<capa; a++)
    for (x=a*2;x<=anchoOriginal;x++)
    {
        for(z=x;z<=anchoOriginal;z++)
        printf(" ");
        for(y=1;y<=x;y++){
        r= (rand( )% (4))+35;
        figura[0] = r;
        printf("*%s",figura);
        }
        printf("\n");
    }
}
