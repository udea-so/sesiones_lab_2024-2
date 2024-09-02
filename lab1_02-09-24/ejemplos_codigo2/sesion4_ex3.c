/*
- Fecha: 06/03/2024
- File: sesion4_ex3.c
- Compilar: gcc -o sesion4_ex3.out sesion4_ex3.c -Wall
- Resumen: Apuntadores y matrices
*/
#include <stdio.h>

#define FILAS 2
#define COLUMNAS 3

int main() {
  // Code
  int M[FILAS][COLUMNAS];
  for(int i = 0; i < FILAS; i++){
   for(int j = 0; j < COLUMNAS; j++){
    M[i][j] = i*FILAS + j;
   } 
  }

  // Mostra matriz
  /*
  for(int i = 0; i < FILAS; i++){
   for(int j = 0; j < COLUMNAS; j++){
    printf("M[%d][%d] = %d ",i,j,M[i][j]);
   } 
   printf("\n");
  }
  */
  // Acceso a un elemento
  int i = 1, j = 1;
  printf("M[%d][%d] = %d \n",i,j,M[i][j]);
  printf("M[%d][%d] = %d \n",i,j, *(M[i] + j));
  printf("M[%d][%d] = %d \n",i,j, *(*(M + i) + j));
  return 0;
}


