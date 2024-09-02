/*
gcc ex2_lab0.c -o ex2.out -Wall
./ex2.out
./ex2.out A B XXX
./ex2.out florida

*/
#include "stdio.h"
#include "string.h"

// Codigo tomado de: http://bluefever.net/Downloads/BeginC/ch51.c

int main(int argc, char *argv[]) {
  printf("\nmain() : argc : %d \n", argc);
  int index = 0;
  for(index = 0; index < argc; ++index) {
    // printf("main() : argv[%d] : %s\n",index,argv[index]);
    if( strncmp( argv[index], "debug", 5) == 0 ) {
      printf("main() : PROGRAM DEBUG MODE\n");
    } else if ( strncmp( argv[index], "-file", 5) == 0 ) {
      printf("main() : PROGRAM READ FILENAME : %s\n", argv[index + 1]);
    }
  }
  printf("\nmain(): Program Quit\n");
  return 0;
}