/*
- Fecha: 06/03/2024
- File: sesion4_ex2.c
- Compilar: gcc -o sesion4_ex2.out sesion4_ex2.c -Wall
- Resumen: Arreglos y apuntadores
*/
#include <stdio.h>
int main() {
  // Code
  float A[] = {1.2, -9.3, 6.1};
  float* p1 = A;
  float* p2 = &A[2];
  printf("A lo normal \n");
  for(int i = 0; i < 3; i++) {
    printf("%p | A[%d]: %f \n", &A[i], i, A[i]);
  }
  printf("A lo puntero \n");
  for(int i = 0; i < 3; i++) {
    //printf("%p | A[%d]: %f \n", &A[i], i, A[i]);
    printf("%p | A[%d]: %f \n", A + i, i, *(A + i));
  }

  *p1 = A[1] + *p2;
  p2--;
  p1++;
  if (p1 == p2) {
    printf("Estamos en la misma parte\n");
  } 
  else {
    printf("Estamos en otra parte\n");
  }
  return 0;
}


