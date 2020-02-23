#include <stdio.h>
#include "Desafio_1/saludo.h"
#include "Desafio_1/arbolconcapas.h"
#include "Desafio_1/piramide.h"
#include "Desafio_1/arbolcontronco.h"
#include "Desafio_1/arbolconhojasaleatorias.h"

int main() {
  int opciones;
  printf("Elija una opcion\n");
  printf("1.- Saludo\n");
  printf("2. Piramide\n");
  printf("3.- Arbol con tronco\n");
  printf("4.-Arbol con capas\n");
  printf("5.-Arbol con hojas aleatorias (yeyecoa)\n");

  scanf("%d",&opciones);

  switch(opciones){
    case 1: saludo();
          break;
    case 2: piramide();
          break;      
    case 3: arbolcontronco();
          break;      
    case 4: arbolconcapas();
          break;
    case 5: arbolconhojasaleatorias();
          break;
    default: printf("Ingrese opción valida\n\n");
          break;      

  }
  return 0;
}