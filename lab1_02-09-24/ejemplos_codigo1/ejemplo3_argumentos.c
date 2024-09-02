#include <stdio.h>
#include <stdlib.h>
#define N 20

int edad_en_meses(int);

int main(int argc, char *argv[])
{
  int edad = atoi(argv[1]);
  int meses = edad_en_meses(edad);
  printf("Edad %d \n", meses);
  return 0;
}

int edad_en_meses(int anios){
  int mes = anios * 12; 
  return mes;
}
