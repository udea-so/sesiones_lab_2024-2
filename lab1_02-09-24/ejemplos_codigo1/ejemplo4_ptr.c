/* Declaraciones de las funciones */
float sumV(float *, int); 
float minV(float *, int);
float maxV(float *, int);
void medidasV(float *, int , float *);

/* Codigo main */
int main() {
  float A[] = {1, 5, 3};
  float med[4];
  medidasV(A, 3, med);
  return 0;
}

/* Definiciones de las funciones */

float sumV(float *V, int T) {
  // codigo suma
  // ...
}

float minV(float *V, int T) {
  // codigo suma
  // ...
}

float maxV(float *V, int T) {
  // codigo suma
  // ...
}

void medidasV(float *V, int T, float *med) {
  *med = minV(V, T);        // med[0] = minV(V, T);
  *(med + 1) = maxV(V, T);  // med[1] = maxV(V, T);
  *(med + 2) = sumV(V, T);  // med[3] = maxV(V, T);
  *(med + 3) = (*sum)/T;    // med[4] = maxV(V, T);
}
