#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("location of code : %p\n", main);
    printf("sizeof(int) = %d\n",sizeof(int));
    int *p = malloc(8);
    int *p2 = malloc(4);
    printf("location of heap : %p\n", p);
    printf("location of p2 in heap : %p\n", p2);
    *p = 3;
    *(p + 1) = 2;
    {
      int x = 3;
      printf("location of stack: %p\n", &x);
    }
    int y = -2;    
    free(p2);
    return 0;
}