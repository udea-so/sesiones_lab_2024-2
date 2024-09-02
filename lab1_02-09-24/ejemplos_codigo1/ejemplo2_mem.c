#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
    int t = 4;
    char *p = malloc(t);
    for(int i = 0; i < t; i++){
      *(p + i) = 256;
    } 
    
    return 0;
}