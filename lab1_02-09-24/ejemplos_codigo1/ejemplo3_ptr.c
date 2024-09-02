/* Declaraciones de las funciones */
float sumV(float *, int); 
float minV(float *, int);
float maxV(float *, int);
void medidasV(float *, int , float *, float *, float *, float *);

/* Codigo main */
int main() {
  float A[] = {1, 5, 3};
  float mini, maxi, sum, prom;
  medidasV(A, 3, &mini, &maxi, &sum, &prom);
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

void medidasV(float *V, int T, float *m, float *M, float *sum, float *avg) {
  *m = minV(V, T);
  *M = maxV(V, T);
  *sum = sumV(V, T);
  *avg = (*sum)/T;
}