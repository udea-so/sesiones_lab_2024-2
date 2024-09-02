#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
    // Reserva en el stack
    int A_stack[4];
    printf("sizeof(int) = %d\n",sizeof(int));
    
    
    for(int i = 0; i < 4; i++) {
      A_stack[i] = 0;
    }
    
    // Reserva en el heap
    int *A_heap = malloc(16);  // 4*4 = 4*sizeof(int) = 16   
    
    
    for(int i = 0; i < 4; i++) {
      //A[i] = 0;
      //*A_heap = 0;
      //A_heap++;
      *(A_heap + i) = 0; //A_heap[i] = 0;
    }
    return 0;
    //malloc(12);
}