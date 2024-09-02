/*
- Fecha: 06/03/2024
- File: sesion4_ex1.c
- Compilar: gcc -o sesion4_ex1.out sesion4_ex1.c -Wall
*/
#include <stdio.h>
int main() {
  // Code
  int a = 3;
  printf("a = %d\n", a);
  int* p_a = &a;
  int** pp_a = &p_a;  
  ++(*p_a); // a++ 
  printf("a = %d\n", a);
  ++(**pp_a); // a++ = ++(*p_a)
  printf("a = %d\n", a);
  printf("---------------- Direcciones ----------------\n");
  printf("Direccion de a-> %p = %p = %p\n", &a, p_a, *pp_a);
  printf("Direccion de p_a -> %p = %p\n", &p_a, pp_a);
  printf("Direccion de pp_a: -> %p \n", &pp_a);
  printf("---------------- Contenido ----------------\n");
  printf("a = %d = %d = %d\n", a, *p_a, **pp_a);
  return 0;
}

