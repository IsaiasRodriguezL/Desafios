#include <stdio.h>

void tronco1 (int,int);
void piramideancho2(int);

int arbolcontronco(){
  int ancho1;
  int alturatronco;
  printf("Cuanto quieres el ancho de la piramide?\n");
  scanf("%d",&ancho1);
  printf("De que altura quieres el tronco?");
  scanf("%d",&alturatronco);
  piramideancho2(ancho1);
  tronco1(ancho1,alturatronco);
 
  return 0;
}

void tronco1 (int espacio,int ancho){
    for (int x = 0; x<ancho; x++){
        for(int y = 0; y<espacio; y++){
            printf(" ");
        }
        printf("||\n");
    }
}
void piramideancho2 (int ancho){
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