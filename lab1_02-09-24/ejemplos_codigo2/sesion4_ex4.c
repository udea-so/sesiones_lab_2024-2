/*
- Fecha: 06/03/2024
- File: sesion4_ex3.c
- Compilar: gcc -o sesion4_ex4.out sesion4_ex4.c -Wall
- Resumen: Manejo dinamico de memoria
- Simulación: https://shorturl.at/jpsAP
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Code
  int a = 3;
  int *p1, *p2;
  p1 = &a;
  printf("-- Sobre los tamaños --\n");
  printf("sizeof(a) = %lu\n",sizeof(a));
  printf("sizeof(int) = %lu\n",sizeof(int));
  printf("sizeof(int*) = %lu\n",sizeof(int*));
  printf("sizeof(int**) = %lu\n",sizeof(int**));
  // Reserva de espacio en el heap usando malloc
  int *p3 = (int *)malloc(sizeof(int));
  p2 = (int *)malloc(sizeof(int));  
  // Accediendo al espacio de memoria en el heap a traves de los apuntadores
  *p2 = 3;
  *p3 = 2*(*p2);
  // Imprimiendo las variables y sus direcciones
  printf("-- Imprimiendo variables (del heap y del stack) --\n");
  printf("%p | a = %d = %d\n", p1, a, *p1); // Direccion en el stack
  printf("%p | *p2 = %d\n", p2, *p2); // Direccion en el heap
  printf("%p | *p3 = %d\n", p3, *p3); // Direccion en el heap
  // Liberando el espacio en el heap
  free(p2);
  free(p3);
  return 0;
}


