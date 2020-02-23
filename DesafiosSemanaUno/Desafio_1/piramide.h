#include <stdio.h>
void piramideancho(int);
int piramide(){
int ancho1;
printf("Cuanto quieres el ancho de la piramide?\n");
scanf("%d",&ancho1);
piramideancho(ancho1);
return 0;
}
void piramideancho(int ancho){
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