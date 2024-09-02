void swap1(int, int);
void swap2(int *, int *);
 
int main() {
  int a = 3, b = -5;
  // a = 3, b = -5
  swap1(a, b);
  // a = 3, b = -5
  swap2(&a, &b);
  // a = -5, b = 3
  return 0;
}

void swap1(int a, int b) {
  int c;
  c = a;
  a = b;
  b = c;
}

void swap2(int *a, int *b) {
  int c;
  c = *a;
  *a = *b;
  *b = c;
}