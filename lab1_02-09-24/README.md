# Sesión 2 - Primeros pasos 

**Fecha**: 02/09/2024

## 1. Recursos disponibles

A continuación se muestran una lista de apuntes de clase que le pueden servir para el desarrollo de esta practica:

1. **Linux básico** [[link]](https://udea-so.github.io/udea-so/docs/laboratorio/tutoriales/herramientas/linux/)
2. **Compilador gcc** [[link]](https://udea-so.github.io/udea-so/docs/laboratorio/tutoriales/herramientas/gcc/)
3. **Introducción al lenguaje C** [[link]](https://udea-so.github.io/intro-c/intro.html)
   
## 2. Contexto

El objetivo de la clase anterior ([link](../lab1_26-08-24/README.md)) era ilustrar el procedimiento, los conocimientos y las herramientas necesarias para abordar el curso. En la clase anterior alcanzamos solamente a ver los temas que se encuentran marcados en la siguiente lista:
- [x] Herramientas ([link](../lab1_26-08-24/README.md#1-herramientas))
- [x] Compilador `gcc` ([link](../lab1_26-08-24/README.md#2-compilador-gcc))
- [ ] Uso básico del `git` ([link](../lab1_26-08-24/README.md#3-uso-básico-del-git))
- [ ] Introducción al lenguaje C ([link](../lab1_26-08-24/README.md#4-introducción-al-lenguaje-c))
- [ ] Enunciado practica 1 ([link](../lab1_26-08-24/README.md#5-sobre-la-practica))

El objetivo de hoy es acabar de abordar los temas necesarios para abordar la primera practica de laboratorio.

## 3. Desarrollo de la sesión

Teniendo en cuenta los conceptos teóricos sobre el lenguaje C ([link](https://udea-so.github.io/intro-c/intro.html)) estudiar y analizar algunos ejemplos

### 3.1. Ejemplos introductorios

Los ejemplos mostrados a continuación tienen videos de apoyo para facilitar su comprensión.

1. Hacer un programa que imprima `"Hello World 20"`, donde `20` esta asociado a una constante llamada `N`.
   
   **Archivo**: `code1.c`

   ```c
   /*
   Compilacion: gcc -Wall -o code1 code1.c
   */

   #include <stdio.h>
   #define N 20
   // Definiciones del programa

   int main(int argc, char *argv[]) {
     int valor = N;
     printf("Hola Mundo %d \n", valor);
  
     return 0;
   }
   ```
   <br>

   > **Video**: Introducción al programa GCC [[link]](https://www.youtube.com/watch?v=A-3li-u4WhY&list=PLlTZ99qnw3zIeOKP8YfMxaKt0GDhAKtHu)


2. Hacer un programa que imprima que declare algunas variables de diferente tipo y las imprima en pantalla.


   **Archivo**: `code2.c`

   ```c
   /*
   Compilacion: gcc -Wall -o code2 code2.c
   */

   #include <stdio.h>
   #define N 20

   int main(int argc, char *argv[]) {
     int edad = N;
     char inicial = 'a';
     // String
     char nombre[10] = "Danny";

     printf("%s %d \n", nombre, edad); // %d decimal -  %s string 
     return 0;
   }
   ```
   <br>

   > **Video**: Introducción a C - scanf [[link]](https://www.youtube.com/watch?v=-XNcEPrEPRk&list=PLlTZ99qnw3zIeOKP8YfMxaKt0GDhAKtHu&index=5) (Desde el principio hasta el 0:39)


3. Mejore el programa anterior de modo que el usuario pueda solicitar el nombre y la edad.

   **Archivo**: `code3.c`

   ```c
   /*
   Compilacion: gcc -Wall -o code3 code3.c
   */

   #include <stdio.h>
   #define N 20

   int main(int argc, char *argv[]) {
     int edad = N;
     char nombre[10] = "Danny";

     scanf("%s", nombre);
     scanf("%d", &edad);
     printf("%s %d \n", nombre, edad); 
     return 0;
   }
   ```

   <br>

   > **Video**: Introducción a C - scanf [[link]](https://www.youtube.com/watch?v=-XNcEPrEPRk&list=PLlTZ99qnw3zIeOKP8YfMxaKt0GDhAKtHu&index=5) (Desde 0:39 hasta el 7:27)


4. Mejore el programa anterior de modo que el usuario pueda solicitar el nombre y la edad.

   **Archivo**: `code4.c`

   ```c
   /*
   Compilacion: gcc -Wall -o code4 code4.c
   */

   int main(int argc, char *argv[]) {
     int edad = N;
     char nombre[10] = "Danny";
  
     printf("Ingrese su nombre: "); 
     scanf("%s", nombre);
     printf("Ingrese su edad: "); 
     scanf("%d", &edad);
     printf("Hola %s su edad es %d \n", nombre, edad); 
  
     return 0;
   }
   ```

   <br>

   > **Video**: Introducción a C - scanf [[link]](https://www.youtube.com/watch?v=-XNcEPrEPRk&list=PLlTZ99qnw3zIeOKP8YfMxaKt0GDhAKtHu&index=5) (Desde 7:28 hasta el final)

5. Hacer un programa que solicite la edad y determine si el sujeto es mayor o menor de edad hasta un numero `N` de veces. Ensayelo con `N` igual a 3.
   
   **Archivo**: `code5.c`

   ```c
   /*
   Compilacion: gcc -Wall -o code5.out code5.out
   */

   #include <stdio.h>
   #define N 20
   #define MAX 3

   int main(int argc, char *argv[]) {
     int edad, i;
     for (i = 0; i < MAX; ++i) {
       printf("Ingrese su edad: ");
       scanf("%d", &edad); 
       if (edad < N) {
         printf("Joven \n");
       } else {
         printf("Viejo \n");
       }
     }
     return 0;
   }
   ```

   <br>

   > **Video**: Introducción a C - estructuras de control [[link]](https://www.youtube.com/watch?v=SRzfDQPtOYE&list=PLlTZ99qnw3zIeOKP8YfMxaKt0GDhAKtHu&index=6) 

6. Hacer un programa que solicite la edad de un sujeto desde linea de comandos y determine si el sujeto es mayor o menor de edad. El programa debe validar que el numero de argumentos (nombre del ejecutable + parametro 1) sea de 2, en caso contrario, el programa debera deplegar un mensaje de error.
      
   **Archivo**: `code6.c`

   ```c
   /*
   Compilacion: gcc -Wall -o code6.out code6.out
   Uso: ./code6.out EDAD
   Ejemplo de uso: ./code6.out 18
   */

   #include <stdio.h>
   #include <stdlib.h>
   #define N 20

   int main(int argc, char *argv[]) {
     if (argc != 2) {
       printf("Error\n");
       return 1;
     }
     int edad = atoi(argv[1]);
     if (edad < N) {
       printf("Joven \n");
     } else {
       printf("Viejo \n");
     }
     return 0;
   }
   ```

   <br>

   > **Video**: Introducción a C - argumentos por línea de comandos [[link]](https://www.youtube.com/watch?v=gBI98kyLbp4&list=PLlTZ99qnw3zIeOKP8YfMxaKt0GDhAKtHu&index=7) 


7. Hacer un programa que solicite por línea de comandos la edad en años y muestre en pantalla la edad en meses equivalente. El programa deberá ser realizado empleando una función que transforme un valor en años a meses.
   
   **Archivo**: `code7.c`

   ```c
   /*
   Compilacion: gcc -Wall -o code7.out code7.out
   Uso: ./code7.out EDAD
   Ejemplo de uso: ./code7.out 5
   */

   #include <stdio.h>
   #include <stdlib.h>
   #define N 20

   // Declaración de funciones
   int edad_en_meses(int);
   
   // Funcion main
   int main(int argc, char *argv[]) {
     int edad = atoi(argv[1]);
     int meses = edad_en_meses(edad);
     printf("Edad %d \n", meses);
     return 0;
   }
   
   // Definicion de funciones
   int edad_en_meses(int anios){
     int mes = anios * 12; 
     return mes;
   }
   ```

   <br>

   > **Video**: Introducción a C - funciones [[link]](https://www.youtube.com/watch?v=IhQp6eTkmaQ&list=PLlTZ99qnw3zIeOKP8YfMxaKt0GDhAKtHu&index=7) 


La siguiente lista de ejemplos no contienen apoyo audiovisual. Simplemente analicelos:

8. Hacer un programa que imprima `"Hello World\n"`.

   **Archivo**: `code8.c`

   ```c
   /*
   Compilacion: gcc -Wall code8.c -o code8.out
   */

   #include <stdio.h>

   int main() {
	 // Su codigo...
     printf("Hello World\n");
	 return 0;
   }
   ```

9. Hacer un programa que despliegue en pantalla el contenido de dos variables enteras.

   **Archivo**: `code9.c`

   ```c
   /*
   Compilacion: gcc -Wall code9.c -o code9.out
   */

   #include <stdio.h>

   int main() {
     int a = 3, b = 2, c;
     c = a + b;
     printf("a + b = %d + %d = %d\n", a, b, c);
     return 0;
   }
   ```

10. Hacer un programa que solicite dos variables enteras por teclado y retorne la suma de estas.

    **Archivo**: `code10.c`

    ```c
    /*
    Compilacion: gcc -Wall code10.c -o code10.out
    */

    #include <stdio.h>

    int main() {
      int a, b, c;
      printf("a: ");
      scanf("%d",&a);  
      printf("b: ");
      scanf("%d",&b);
      c = a + b;
      printf("a + b = %d + %d = %d\n", a, b, c);
      return 0;
    }
    ```

11. Hacer un programa que solicite el nombre y la edad en años de un usuario y retorne la edad en días.

    **Archivo**: `code11.c`

    ```c
    /*
    Compilacion: gcc -Wall code11.c -o code11.out
    */

    #include <stdio.h>

    int main() {
      char nom[31];
      int eyear;
      float edays;
      printf("Digite el nombre: ");
      scanf("%s", nom);
      printf("Digite la edad en años: ");
      scanf("%d", &eyear);
      edays = 365.6*eyear;
      printf("%s usted tiene %.1f dias\n", nom, edays);
      return 0;
    }
    ```

12. Hacer el programa anterior empleando programación modular (es decir usando funciones donde sea posible).

    **Archivo**: `code12.c`

    ```c
    /*
    Compilacion: gcc -Wall code12.c -o code12.out
    */

    #include <stdio.h>

    // Declaracion
    float year2days(int x);

    int main() {
      char nom[31];
      int eyear;
      float edays;
      printf("Digite el nombre: ");
      scanf("%s", nom);
      printf("Digite la edad en años: ");
      scanf("%d", &eyear); 
      edays = year2days(eyear);
      printf("%s usted tiene %.1f dias\n", nom, edays);
      return 0;
    }

    // Definicion
    float year2days(int x) {
      float d = 365.6*x;
      return d;
    }
    ```

13. Hacer un programa que calcule la distancia entre dos puntos. Emplee programacion modular. (**Importante**: Observe el uso de la opción `-lm` empleada en el `gcc`).
    
    **Archivo**: `code13.c`
    
    ```c
    /*
    Compilacion: gcc -Wall code13.c -lm -o code13.out
    */

    #include <stdio.h>
    #include <math.h>

    // Declaracion
    void imprimirPunto(double x, double y);
    double calcularDistancia(double x1, double y1, double x2, double y2);

    int main() {
      double x1, y1, x2, y2, d;
      printf("Digite el punto 1: ");
      scanf("(%lf,%lf)",&x1,&y1);
      printf("P1: ");
   
      /*
      printf("Digite el punto 1:\n");
      scanf("%lf%lf",&x1,&y1);
      printf("P1: ");
      */
      imprimirPunto(x1,y1);
      printf("Digite el punto 2:\n");
      scanf("%lf%lf",&x2,&y2);
      printf("P2: ");
      imprimirPunto(x2,y2);
      d = calcularDistancia(x1, y1, x2, y2);
      printf("Distancia: %.2lf\n",d);
     return 0;
    }

    // Definicion
    void imprimirPunto(double x, double y) {
      printf("(%.2lf, %.2lf)\n",x,y);
    }

    double calcularDistancia(double x1, double y1, double x2, double y2) {
      double dx = x2 - x1;
      double dy = y2 - y1;
      double d;
      d = sqrt(pow(dx,2) + pow(dy,2));
      return d;
    }
    ```

14. Hacer un programa que solicite las coordenadas de dos puntos, pero de manera más elegante para luego calcular la distancia.
    
    **Archivo**: `code14.c`
    
    ```c
    /*
    Compilacion: gcc -Wall ex6_gr3.c -lm -o ex6_gr3.out
    */

    #include <stdio.h>
    #include <math.h>

    // Declaraciones

    double calcularDistancia(double x1, double y1, double x2, double y2);
    void imprimirPunto(double x, double y);


    int main() {
      // Codigo suyo...
      double x1, y1;  //P1
      double x2, y2; // P2
      double dist;
      printf("Ingrese el primer punto (x1,y1):\n");
      setbuf(stdin, NULL); // Vaciado del buffer de entrada
      scanf("(%lf,%lf)",&x1, &y1);
      printf("Ingrese el segundo punto (x2,y2):\n");
      setbuf(stdin, NULL); // Vaciado del buffer de entrada
      scanf("(%lf,%lf)",&x2, &y2);
      /*
      printf("Ingrese el primer punto:\n");
      scanf("%lf%lf",&x1, &y1);
      printf("Ingrese el segundo punto:\n");
      scanf("%lf%lf",&x2, &y2);
      */
      dist = calcularDistancia(x1, y1, x2, y2);
      printf("La distancia entre ");
      imprimirPunto(x1,y1);
      printf(" y ");
      imprimirPunto(x2,y2);
      printf(" es %lf\n",dist);
      return 0;
    }

    double calcularDistancia(double x1, double y1, double x2, double y2) {
      double dx = x2 - x1;
      double dy = y2 - y1;
      double d = sqrt(pow(dx,2) + pow(dy,2));
      return d;
    }

    void imprimirPunto(double x, double y) {
      printf("(%.2lf,%.2lf)",x, y);
    }
    ```

### 3.2. Ejemplos con apuntadores y arreglos

Los siguientes ejemplos tiene apoyo audiovisual para facilitar su comprensión:

1. Hacer un programa que permita comprender el concepto de un apuntador.
   
   **Archivo**: `part2_code1.c`

   ```c
   /*
   Compilacion: gcc -Wall -o part2_code1 part2_code1.c
   */

   #include <stdio.h>

   int main() {
     int var_a = 5;
     // Esta es la forma como declaramos una variable de tipo apuntador
     int* pointer;
  
     // El operador & se elle como "la direccion de" 
     pointer = &var_a;
     printf("El valor de var_a es %d \n", var_a);
     printf("El valor de pointer es %p \n", pointer);
     // El operador * des-referencia el apuntador
     printf("El valor de var_a a traves de pointer es es %d \n", *pointer);
     return 0;
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20var_a%20%3D%205%3B%0A%20%20//%20Esta%20es%20la%20forma%20como%20declaramos%20una%20variable%20de%20tipo%20apuntador%0A%20%20int*%20pointer%3B%0A%20%20%0A%20%20//%20El%20operador%20%26%20se%20elle%20como%20%22la%20direccion%20de%22%20%0A%20%20pointer%20%3D%20%26var_a%3B%0A%20%20printf%28%22El%20valor%20de%20var_a%20es%20%25d%20%5Cn%22,%20var_a%29%3B%0A%20%20printf%28%22El%20valor%20de%20pointer%20es%20%25p%20%5Cn%22,%20pointer%29%3B%0A%20%20//%20El%20operador%20*%20des-referencia%20el%20apuntador%0A%20%20printf%28%22El%20valor%20de%20var_a%20a%20traves%20de%20pointer%20es%20es%20%25d%20%5Cn%22,%20*pointer%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

   <br>

   > **Video**:  
   > * Apuntadores en C [[link]](https://www.youtube.com/watch?v=M66U6_Kb68k&list=PLlTZ99qnw3zL6nq7eajHvUvFIRxTqlLZN)
   > * Apuntadores en C Ejemplo [[link]](https://www.youtube.com/watch?v=7067_BrUu2o&list=PLlTZ99qnw3zL6nq7eajHvUvFIRxTqlLZN&index=3)


2. Haga otro programa que declare dos variables y dos apuntadores uno a cada una. Luego a la primera variable llevele la suma de si misma con la otra, todo esto a través de los apuntadores.
   
   **Archivo**: `part2_code2.c`

   ```c
   /*
   Compilacion: gcc -Wall -o part2_code2 part2_code2.c
   */

   #include <stdio.h>

   int main() {
     int var_a = 5, var_b = 3;
     int* pointer_a;
     int* pointer_b;
     pointer_a = &var_a;
     pointer_b = &var_b;

     // var_a = var_a + var_b;
     *pointer_a = *pointer_a + *pointer_b;

     printf("El valor final de var_a es %d \n", var_a);
  
     return 0;
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20var_a%20%3D%205,%20var_b%20%3D%203%3B%0A%20%20int*%20pointer_a%3B%0A%20%20int*%20pointer_b%3B%0A%20%20pointer_a%20%3D%20%26var_a%3B%0A%20%20pointer_b%20%3D%20%26var_b%3B%0A%0A%20%20//%20var_a%20%3D%20var_a%20%2B%20var_b%3B%0A%20%20*pointer_a%20%3D%20*pointer_a%20%2B%20*pointer_b%3B%0A%0A%20%20printf%28%22El%20valor%20final%20de%20var_a%20es%20%25d%20%5Cn%22,%20var_a%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

   <br>

   > **Video**: Apuntadores en C Ejemplo 2 [[link]](https://www.youtube.com/watch?v=dnvNCtQ0amI&list=PLlTZ99qnw3zL6nq7eajHvUvFIRxTqlLZN&index=3)


3. Realizar una función que intercambie dos variables enteras. El paso de los parámetros debe ser por valor.
   
   **Archivo**: `swap1.c`

   ```c
   /*
   Compilacion: gcc -Wall -o swap1 swap1.c
   */

   #include <stdio.h>

   void swap (int, int);

   int main() {
     int var_a = 5, var_b = 3;
     printf("El valor antes de swap de var_a es %d \n", var_a);
     printf("El valor antes de swap de var_b es %d \n", var_b);
  
     swap(var_a, var_b);

     printf("El valor después de swap de var_a es %d \n", var_a);
     printf("El valor después de swap de var_b es %d \n", var_b);
     return 0;
   }

   void swap(int a, int b){
     int temp = a;
     a = b;
     b = temp;
     return;
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20var_a%20%3D%205,%20var_b%20%3D%203%3B%0A%20%20int*%20pointer_a%3B%0A%20%20int*%20pointer_b%3B%0A%20%20pointer_a%20%3D%20%26var_a%3B%0A%20%20pointer_b%20%3D%20%26var_b%3B%0A%0A%20%20//%20var_a%20%3D%20var_a%20%2B%20var_b%3B%0A%20%20*pointer_a%20%3D%20*pointer_a%20%2B%20*pointer_b%3B%0A%0A%20%20printf%28%22El%20valor%20final%20de%20var_a%20es%20%25d%20%5Cn%22,%20var_a%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

   <br>

   > **Video**: Parámetros por referencia 1 [[link]](https://www.youtube.com/watch?v=x5rj0-vyLdc&list=PLlTZ99qnw3zL6nq7eajHvUvFIRxTqlLZN&index=5)


4. Realizar una función que intercambie dos variables enteras. El paso de los parámetros debe ser por referencia.
   
   **Archivo**: `swap2.c`

   ```c
   /*
   Compilacion: gcc -Wall -o swap2 swap2.c
   */

   #include <stdio.h>

   void swap (int*, int*);

   int main() {
     int var_a = 5, var_b = 3;
     printf("El valor antes de swap de var_a es %d \n", var_a);
     printf("El valor antes de swap de var_b es %d \n", var_b);
  
     swap(&var_a, &var_b);

     printf("El valor después de swap de var_a es %d \n", var_a);
     printf("El valor después de swap de var_b es %d \n", var_b);
     return 0;
   }

   void swap(int *p_a, int *p_b){
     int temp = *p_a;
     *p_a = *p_b;
     *p_b = temp;
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20swap%20%28int*,%20int*%29%3B%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20var_a%20%3D%205,%20var_b%20%3D%203%3B%0A%20%20printf%28%22El%20valor%20antes%20de%20swap%20de%20var_a%20es%20%25d%20%5Cn%22,%20var_a%29%3B%0A%20%20printf%28%22El%20valor%20antes%20de%20swap%20de%20var_b%20es%20%25d%20%5Cn%22,%20var_b%29%3B%0A%20%20%0A%20%20swap%28%26var_a,%20%26var_b%29%3B%0A%0A%20%20printf%28%22El%20valor%20despu%C3%A9s%20de%20swap%20de%20var_a%20es%20%25d%20%5Cn%22,%20var_a%29%3B%0A%20%20printf%28%22El%20valor%20despu%C3%A9s%20de%20swap%20de%20var_b%20es%20%25d%20%5Cn%22,%20var_b%29%3B%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20swap%28int%20*p_a,%20int%20*p_b%29%7B%0A%20%20int%20temp%20%3D%20*p_a%3B%0A%20%20*p_a%20%3D%20*p_b%3B%0A%20%20*p_b%20%3D%20temp%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

   <br>

   > **Video**: Parámetros por referencia 2 [[link]](https://www.youtube.com/watch?v=gFHoWOaphDk&list=PLlTZ99qnw3zL6nq7eajHvUvFIRxTqlLZN&index=6)


5. Hacer un programa que ilustre la declaración y manipulación de un array en C.
   
   **Archivo**: `array1.c`

   ```c
   /*
   Compilacion: gcc -Wall -o array1 array1.c
   */

   #include <stdio.h>

   int main() {
     int vec[5] = {2, 3, 0, 1, 4};
     printf("vec[3] = %d\n", vec[3]);
     vec[2] = 8;
     return 0;
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0A%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20vec%5B5%5D%20%3D%20%7B2,%203,%200,%201,%204%7D%3B%0A%20%20printf%28%22vec%5B3%5D%20%3D%20%25d%5Cn%22,%20vec%5B3%5D%29%3B%0A%20%20vec%5B2%5D%20%3D%208%3B%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)


6. Hacer un programa declare y manipule un array empleando la notación subindice y la notación apuntador.

   **Archivo**: `array2.c`

   ```c
   /*
   Compilacion: gcc -Wall -o array2 array2.c
   */

   #include <stdio.h>

   int main() {
     int vec [5] = {2, 3, 0, 1, 4};
     printf("vec[0] = %d\n", vec[0]);
     printf("vec[0] = %d\n", *vec);

     printf("vec[1] = %d\n", vec[1]);
     printf("vec[1] = %d\n", *(vec+1));
     return 0;
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20vec%20%5B5%5D%20%3D%20%7B2,%203,%200,%201,%204%7D%3B%0A%20%20printf%28%22vec%5B0%5D%20%3D%20%25d%5Cn%22,%20vec%5B0%5D%29%3B%0A%20%20printf%28%22vec%5B0%5D%20%3D%20%25d%5Cn%22,%20*vec%29%3B%0A%0A%20%20printf%28%22vec%5B1%5D%20%3D%20%25d%5Cn%22,%20vec%5B1%5D%29%3B%0A%20%20printf%28%22vec%5B1%5D%20%3D%20%25d%5Cn%22,%20*%28vec%2B1%29%29%3B%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

   <br>

   > **Video**: Arreglos y Apuntadores [[link]](https://www.youtube.com/watch?v=_xom9ThZGIA&list=PLlTZ99qnw3zL6nq7eajHvUvFIRxTqlLZN&index=8)

7. Hacer un programa declare y manipule un array empleando la notación subíndice. Luego, use un apuntador a este y mediante su uso haga exactamente lo mismo que hizo cuando manipulo el vector mediante subindices.

   **Archivo**: `array3.c`

   ```c
   /*
   Compilacion: gcc -Wall -o array3 array3.c
   */

   #include <stdio.h>

   int main() {
     int vec [5] = {2, 3, 0, 1, 4};
     printf("vec[0] = %d\n", vec[0]);
     printf("vec[0] = %d\n", *vec);
     int* p_v = vec; 
     printf("vec[1] = %d\n", p_v[1]);
     printf("vec[1] = %d\n", *(p_v + 1));
     return 0;
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20vec%20%5B5%5D%20%3D%20%7B2,%203,%200,%201,%204%7D%3B%0A%20%20printf%28%22vec%5B0%5D%20%3D%20%25d%5Cn%22,%20vec%5B0%5D%29%3B%0A%20%20printf%28%22vec%5B0%5D%20%3D%20%25d%5Cn%22,%20*vec%29%3B%0A%20%20int*%20p_v%20%3D%20vec%3B%20%0A%20%20printf%28%22vec%5B1%5D%20%3D%20%25d%5Cn%22,%20p_v%5B1%5D%29%3B%0A%20%20printf%28%22vec%5B1%5D%20%3D%20%25d%5Cn%22,%20*%28p_v%20%2B%201%29%29%3B%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

   <br>

   > **Video**: Arreglos y Apuntadores [[link]](https://www.youtube.com/watch?v=_xom9ThZGIA&list=PLlTZ99qnw3zL6nq7eajHvUvFIRxTqlLZN&index=8)

8. Hacer una función que permita llevar todos los elementos de un arreglo de tamaño 5 a un valor de 0.

   **Archivo**: `funcion_array.c`

   ```c
   /*
   Compilacion: gcc -Wall -o funcion_array funcion_array.c
   */

   #include <stdio.h>

   void clear(int*);

   int main() {
     int vec [5] = {2, 3, 0, 1, 4};
     clear(vec);
     return 0;
   }

   void clear(int* vec_f) {
	 int i;
     for(i = 0; i > 5; i++) {
	   vec_f[i] = 0;
	 }	
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20clear%28int*%29%3B%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20vec%20%5B5%5D%20%3D%20%7B2,%203,%200,%201,%204%7D%3B%0A%20%20clear%28vec%29%3B%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20clear%28int*%20vec_f%29%20%7B%0A%20%20int%20i%3B%0A%20%20for%28i%20%3D%200%3B%20i%20%3E%205%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20vec_f%5Bi%5D%20%3D%200%3B%0A%20%20%7D%20%20%20%20%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

   <br>

   > **Video**: Paso de arreglos por referencia [[link]](https://www.youtube.com/watch?v=WXWnwp64Rvc&list=PLlTZ99qnw3zL6nq7eajHvUvFIRxTqlLZN&index=9)

### 3.3. Ejemplos de manejo dinamico de memoria y archivos

Para tener una idea de lo que es el manejo de memoria remitamonos a la siguiente imagen de Julia Evans ([link](https://wizardzines.com/comics/memory-allocation/)):

![mem_alloc](memory-allocation.png)

Asi mismo, recordemos como es el address space asociado a un proceso:

![address_space](address_space.png)

Con esto en mente, y comprendiendo el concepto de apuntadores, podemos empezar a analizar algunos ejemplos:

#### Memoria dinamica

1. Analice, comprenda y ejecute el siguiente código:
   
   **Archivo**:

   ```c
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
   ```
   
   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Aint%20main%28int%20argc,%20char%20*argv%5B%5D%29%20%7B%0A%20%20%20%20printf%28%22location%20of%20code%20%3A%20%25p%5Cn%22,%20main%29%3B%0A%20%20%20%20printf%28%22sizeof%28int%29%20%3D%20%25d%5Cn%22,sizeof%28int%29%29%3B%0A%20%20%20%20int%20*p%20%3D%20malloc%288%29%3B%0A%20%20%20%20int%20*p2%20%3D%20malloc%284%29%3B%0A%20%20%20%20printf%28%22location%20of%20heap%20%3A%20%25p%5Cn%22,%20p%29%3B%0A%20%20%20%20printf%28%22location%20of%20p2%20in%20heap%20%3A%20%25p%5Cn%22,%20p2%29%3B%0A%20%20%20%20*p%20%3D%203%3B%0A%20%20%20%20*%28p%20%2B%201%29%20%3D%202%3B%0A%20%20%20%20%7B%0A%20%20%20%20%20%20int%20x%20%3D%203%3B%0A%20%20%20%20%20%20printf%28%22location%20of%20stack%3A%20%25p%5Cn%22,%20%26x%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20int%20y%20%3D%20-2%3B%20%20%20%20%0A%20%20%20%20free%28p2%29%3B%0A%20%20%20%20return%200%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

2. Analice, comprenda y ejecute el siguiente código:
   
   **Archivo**:

   ```c
   #include <stdio.h>
   #include <stdlib.h>

   int main(int argc, char *argv[]) {
  
     int t = 4;
     char *p = malloc(t);
     for(int i = 0; i < t; i++){
       *(p + i) = 256;
     }  
     free(p);
     return 0;
   }
   ```
   
3. Analice, comprenda y ejecute el siguiente código:
   
   **Archivo**:

   ```c
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
     free(A_heap);
     return 0;
     //malloc(12);
   }
   ```   

4. En el siguiente código, se trabaja con una arreglo de cadenas de caracteres. Comprenda como funciona:
   
   **Archivo**:

   ```c
   #include <stdio.h>

   int main() {
     char *myStrPtr[5] = { "Universidad de Antioquia",
                           "Alma Mater",
                           "De la patria."};
     int i = 0;
     while(myStrPtr[i] != NULL) {
       printf("%s\n",myStrPtr[i]);
       i++;
     }
     return 0;
   }
   ```   

5. Analice el siguiente codigo en el cual se hace una copia.
   
   **Archivo**:

   ```c
   #include <stdio.h>
   #include <string.h>

   #define UDEA "UdeA"

   int main() {  
     char *udea_1 = UDEA;
     char udea_2[] = UDEA;
     printf("%s\n", udea_1);
     printf("%s\n", udea_2);
     char *udea_3;
     int tam = strlen(udea_1);
     printf("%d\n", tam);
     udea_3 = (char *)malloc((tam+1)*sizeof(char));
     strcpy(udea_3, udea_1);
     printf("%s\n", udea_3);
     free(udea_3);
     udea_3 = NULL;
     return 0;
   }
   ```   

6. El siguiente ejemplo muestra una versión alternartiva para realizar una copia.
   
   ```c
   #include <stdio.h>
   #include <string.h>

   #define TAM 3

   char* apostoles[] = {
                        "Pedro",
                        "Santiago",
                        "Juan"
                       }; 

   int main() {
     char** apostoles_ptr;
     apostoles_ptr = apostoles;
     printf("Jesus y los apostoles:\n");
     /****** Acceso los nombres de los apostoles ******/ 
     for(int i = 0; i < TAM; i++) {
       // printf("- %s\n", apostoles[i]);
       // printf("- %s\n", *(apostoles + i));
       printf("- %s\n", *(apostoles_ptr + i));
     }
  
     /****** Creación de un arreglo dinamico ******/ 
     char** apostoles2 = malloc(TAM*sizeof(char*));
  
     // Agregando copia de los apostoles
     for(int i = 0; i < TAM; i++) {
       int tam_nom = strlen(apostoles[i]);
       // Se reserva memoria para cada uno de los apostoles
       apostoles2[i] = (char *)malloc((tam_nom + 1 )*sizeof(char));
       strcpy(apostoles2[i], apostoles[i]);
     }
  
     // Imprimiendo los apostoles
     printf("[Transfiguracion] Jesus se llevo a la montaña a:\n");
     for(int i = 0; i < TAM; i++) {
       printf("- %s\n", *(apostoles2 + i));
     }
  
     /****** Liberando el arreglo dinamico ******/ 
     printf("Se acabo el paseo\n");
     // Liberando cada componente
     for(int i = 0; i < TAM; i++) {
       free(apostoles2[i]);
       apostoles2[i] = NULL;
     }   
     // Liberando la cadena inicial
     free(apostoles2);  
     apostoles2 = NULL;
     return 0;
   }
   ```

   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstring.h%3E%0A%0A%23define%20TAM%203%0A%0Achar*%20apostoles%5B%5D%20%3D%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%22Pedro%22,%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%22Santiago%22,%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%22Juan%22%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%7D%3B%20%0A%0Aint%20main%28%29%20%7B%0A%0A%20%20char**%20apostoles_ptr%3B%0A%20%20apostoles_ptr%20%3D%20apostoles%3B%0A%20%20printf%28%22Jesus%20y%20los%20apostoles%3A%5Cn%22%29%3B%0A%20%20/******%20Acceso%20los%20nombres%20de%20los%20apostoles%20******/%20%0A%20%20for%28int%20i%20%3D%200%3B%20i%20%3C%20TAM%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20//%20printf%28%22-%20%25s%5Cn%22,%20apostoles%5Bi%5D%29%3B%0A%20%20%20%20//%20printf%28%22-%20%25s%5Cn%22,%20*%28apostoles%20%2B%20i%29%29%3B%0A%20%20%20%20printf%28%22-%20%25s%5Cn%22,%20*%28apostoles_ptr%20%2B%20i%29%29%3B%0A%20%20%7D%0A%20%20%0A%20%20/******%20Creaci%C3%B3n%20de%20un%20arreglo%20dinamico%20******/%20%0A%20%20char**%20apostoles2%20%3D%20malloc%28TAM*sizeof%28char*%29%29%3B%0A%20%20%0A%20%20//%20Agregando%20copia%20de%20los%20apostoles%0A%20%20for%28int%20i%20%3D%200%3B%20i%20%3C%20TAM%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20int%20tam_nom%20%3D%20strlen%28apostoles%5Bi%5D%29%3B%0A%20%20%20%20//%20Se%20reserva%20memoria%20para%20cada%20uno%20de%20los%20apostoles%0A%20%20%20%20apostoles2%5Bi%5D%20%3D%20%28char%20*%29malloc%28%28tam_nom%20%2B%201%20%29*sizeof%28char%29%29%3B%0A%20%20%20%20strcpy%28apostoles2%5Bi%5D,%20apostoles%5Bi%5D%29%3B%0A%20%20%7D%0A%20%20%0A%20%20//%20Imprimiendo%20los%20apostoles%0A%20%20printf%28%22%5BTransfiguracion%5D%20Jesus%20se%20llevo%20a%20la%20monta%C3%B1a%20a%3A%5Cn%22%29%3B%0A%20%20for%28int%20i%20%3D%200%3B%20i%20%3C%20TAM%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20printf%28%22-%20%25s%5Cn%22,%20*%28apostoles2%20%2B%20i%29%29%3B%0A%20%20%7D%0A%20%20%0A%20%20/******%20Liberando%20el%20arreglo%20dinamico%20******/%20%0A%20%20printf%28%22Se%20acabo%20el%20paseo%5Cn%22%29%3B%0A%20%20//%20Liberando%20cada%20componente%0A%20%20for%28int%20i%20%3D%200%3B%20i%20%3C%20TAM%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20free%28apostoles2%5Bi%5D%29%3B%0A%20%20%20%20apostoles2%5Bi%5D%20%3D%20NULL%3B%0A%20%20%7D%20%20%0A%20%20//%20Liberando%20la%20cadena%20inicial%0A%20%20free%28apostoles2%29%3B%20%20%0A%20%20apostoles2%20%3D%20NULL%3B%0A%20%20return%200%3B%0A%7D%0A&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

7. A continuación, se muestra un fragmento de código que implementa una lista enlazada.
   
   **Codigo**:

   ```c
   #include <assert.h>
   #include <stdlib.h>
   #include <stdio.h>

   struct node {
     int data;
     struct node * next;
   };

   void print_list(struct node *head);
   struct node * insert_at_end(struct node *head, int data);
   int delete_at_front(struct node **phead); 
   void addOne(int *pn);


   int main() {
     int n = 100;
     addOne(&n);
     printf("n = %d\n", n);

     struct node * head = NULL;
     head = insert_at_end(head, 10);
     print_list(head);
     head = insert_at_end(head, 20);
     print_list(head);
     head = insert_at_end(head, 30);
     print_list(head);
     delete_at_begin(&head);
     print_list(head);
     delete_at_begin(&head);
     print_list(head);
     delete_at_begin(&head);
     print_list(head);
     return 0;
   }

   int delete_at_front(struct node **phead) {
     struct node * first = *phead;
     assert(first != NULL);
     *phead = first->next;
     int data = first->data;
     free(first);
     return data;
   }

   struct node * insert_at_end(struct node *head, int data) {
     // create a new node.
     struct node * new_node = malloc(sizeof(struct node));
     assert(new_node != NULL);
     new_node->data = data;
     new_node->next = NULL;

     // list is empty.
     if (head == NULL) {
       head = new_node;
       return head;    
     }

     // list has some elements already.
     struct node *current = head;
     while (current->next != NULL) {
       current = current->next;
     }

     current->next = new_node;
     return head;
   }

   void print_list(struct node *head) {
     struct node * current = head;
     if (current == NULL) {
       printf("Empty list.\n");
       return;
     } 
     else {
       while (current) {
         printf("|%d|%p| -> ", current->data, current->next);
         current = current->next;
       } 
       printf("\n");
     } 
   }

   void delete_at_begin(struct node **phead) {
     struct node *first = *phead;
     *phead = (*phead)->next;
     free(first);
   }

   void addOne(int *pn) {
     *pn = *pn + 1;
   }
   ```
   
   Para simular el código siga el siguiente [link](https://pythontutor.com/render.html#code=%23include%20%3Cassert.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%23include%20%3Cstdio.h%3E%0A%0Astruct%20node%20%7B%0A%20%20%20%20int%20data%3B%0A%20%20%20%20struct%20node%20*%20next%3B%0A%7D%3B%0A%0Avoid%20print_list%28struct%20node%20*head%29%3B%0Astruct%20node%20*%20insert_at_end%28struct%20node%20*head,%20int%20data%29%3B%0Aint%20delete_at_front%28struct%20node%20**phead%29%3B%20%0Avoid%20addOne%28int%20*pn%29%3B%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20%20%20int%20n%20%3D%20100%3B%0A%20%20%20%20addOne%28%26n%29%3B%0A%20%20%20%20printf%28%22n%20%3D%20%25d%5Cn%22,%20n%29%3B%0A%0A%20%20%20%20struct%20node%20*%20head%20%3D%20NULL%3B%0A%20%20%20%20head%20%3D%20insert_at_end%28head,%2010%29%3B%0A%20%20%20%20print_list%28head%29%3B%0A%20%20%20%20head%20%3D%20insert_at_end%28head,%2020%29%3B%0A%20%20%20%20print_list%28head%29%3B%0A%20%20%20%20head%20%3D%20insert_at_end%28head,%2030%29%3B%0A%20%20%20%20print_list%28head%29%3B%0A%20%20%20%20delete_at_begin%28%26head%29%3B%0A%20%20%20%20print_list%28head%29%3B%0A%20%20%20%20delete_at_begin%28%26head%29%3B%0A%20%20%20%20print_list%28head%29%3B%0A%20%20%20%20delete_at_begin%28%26head%29%3B%0A%20%20%20%20print_list%28head%29%3B%0A%20%20%20%20return%200%3B%0A%7D%0A%0Aint%20delete_at_front%28struct%20node%20**phead%29%20%7B%0A%20%20%20%20struct%20node%20*%20first%20%3D%20*phead%3B%0A%20%20%20%20assert%28first%20!%3D%20NULL%29%3B%0A%20%20%20%20*phead%20%3D%20first-%3Enext%3B%0A%20%20%20%20int%20data%20%3D%20first-%3Edata%3B%0A%20%20%20%20free%28first%29%3B%0A%20%20%20%20return%20data%3B%0A%7D%0A%0Astruct%20node%20*%20insert_at_end%28struct%20node%20*head,%20int%20data%29%20%7B%0A%20%20%20%20//%20create%20a%20new%20node.%0A%20%20%20%20struct%20node%20*%20new_node%20%3D%20malloc%28sizeof%28struct%20node%29%29%3B%0A%20%20%20%20assert%28new_node%20!%3D%20NULL%29%3B%0A%20%20%20%20new_node-%3Edata%20%3D%20data%3B%0A%20%20%20%20new_node-%3Enext%20%3D%20NULL%3B%0A%0A%20%20%20%20//%20list%20is%20empty.%0A%20%20%20%20if%20%28head%20%3D%3D%20NULL%29%20%7B%0A%20%20%20%20%20%20%20%20head%20%3D%20new_node%3B%0A%20%20%20%20%20%20%20%20return%20head%3B%20%20%20%20%0A%20%20%20%20%7D%0A%0A%20%20%20%20//%20list%20has%20some%20elements%20already.%0A%20%20%20%20struct%20node%20*current%20%3D%20head%3B%0A%20%20%20%20while%20%28current-%3Enext%20!%3D%20NULL%29%20%7B%0A%20%20%20%20%20%20%20%20current%20%3D%20current-%3Enext%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20current-%3Enext%20%3D%20new_node%3B%0A%20%20%20%20return%20head%3B%0A%7D%0A%0Avoid%20print_list%28struct%20node%20*head%29%20%7B%0A%20%20%20%20struct%20node%20*%20current%20%3D%20head%3B%0A%20%20%20%20if%20%28current%20%3D%3D%20NULL%29%20%7B%0A%20%20%20%20%20%20%20%20printf%28%22Empty%20list.%5Cn%22%29%3B%0A%20%20%20%20%20%20%20%20return%3B%0A%20%20%20%20%7D%20else%20%7B%0A%20%20%20%20%20%20%20%20while%20%28current%29%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20printf%28%22%7C%25d%7C%25p%7C%20-%3E%20%22,%20current-%3Edata,%20current-%3Enext%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20current%20%3D%20current-%3Enext%3B%0A%20%20%20%20%20%20%20%20%7D%20%0A%20%20%20%20%20%20%20%20printf%28%22%5Cn%22%29%3B%0A%20%20%20%20%7D%20%0A%7D%0A%0Avoid%20delete_at_begin%28struct%20node%20**phead%29%20%7B%0A%20%20%20%20struct%20node%20*first%20%3D%20*phead%3B%0A%20%20%20%20*phead%20%3D%20%28*phead%29-%3Enext%3B%0A%20%20%20%20free%28first%29%3B%0A%7D%0A%0Avoid%20addOne%28int%20*pn%29%20%7B%0A%20%20%20%20*pn%20%3D%20*pn%20%2B%201%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false)

#### Archivos

1. Se tienen los siguientes archivos:
   
   **Archivo**: [foo.txt](https://pages.cs.wisc.edu/~gerald/cs354/Spring2019/code/lecture05/foo.txt)
   
   ```
   Remember, Hope is a good thing, maybe the best of things, and no good thing ever dies.
   ```
   
   **Archivo**: [file-io.c](https://pages.cs.wisc.edu/~gerald/cs354/Spring2019/code/lecture05/file-io.c)

   ```c
   #include <stdio.h>

   #define MAX 10

   int main() {
     FILE *fp;
     char buff[MAX];

     fp = fopen("foo.txt", "r");
    
     while (fgets(buff, MAX, fp)) {
       printf("%s", buff);
     }
     fclose(fp);

     fp = fopen("bar.bin", "wb");
     int num = 0x12345678;
     fwrite(&num, sizeof(int), 1, fp);
     fclose(fp);
 
     fp = fopen("bar.bin", "rb");
     int readNum;
     fread(&readNum, sizeof(int), 1, fp);
     printf("readNum = 0x%x\n", readNum);
     fclose(fp);
     return 0;
   }
   ```

## 3. Referencias

1. https://pages.cs.wisc.edu/~gerald/cs354/Spring2019/