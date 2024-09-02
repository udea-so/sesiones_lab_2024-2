#include <stdio.h>
#include <stdlib.h>

struct estudiante {
  char ID[9];
  char nombre[41];
  float nota; 
};

typedef struct estudiante student;

int main() {
  // 1. Open
  char filename[80] = "notas.txt";
  FILE *fp;
  char l[51];
  char ID[10];
  char name[20];
  float grade;
  fp = fopen(filename,"r");
  if(fp == NULL) {
    printf("Can not open %s\n", filename);
    exit(1);
  }
  printf("Archivo abierto\n");

  // 2. Process
  while(fscanf(fp,"%[^;];%[^;];%f",ID,name,&grade)!=EOF) {
    printf("%s -  %s - %f",ID,name,grade);
  } 

  // 3. Close
  fclose(fp);
  printf("Archivo cerrado\n");
  exit(0);
}


/**

int main() {
  // Open
  char filename[80] = "notas.txt";
  char linea[51];
  char id[20];
  char nom[45]; 
  float not;

  FILE *fp;
  fp = fopen(filename,"r");
  if(fp == NULL) {
    printf("Can not open %s\n", filename);
    exit(1);
  }
  printf("Archivo abierto\n");
  // Process  
  //https://www.daniweb.com/programming/software-development/threads/334515/reading-comma-separated-values-with-fscanf
  


  while(fscanf(fp, "%s%*c%s%*c%f",id,nom,&not)!=EOF) {
    //printf("%s\n",linea);
    printf("**********%s - %s - %f",id,nom,not);
    printf("\n");
  } 
  
  // Close  
  fclose(fp);
  printf("Archivo cerrado\n");
  exit(0);
}

*/

