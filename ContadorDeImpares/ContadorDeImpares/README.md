# Contador de Números Impares en un Array

Este programa en C++ permite ingresar 15 números en un array y luego cuenta cuántos de esos números son impares. El programa realiza dos operaciones principales: la entrada de datos y el conteo de números impares.

## Propósito del Código

El propósito de este programa es ingresar 15 números enteros desde la entrada estándar y luego contar cuántos de esos números son impares. Este tipo de programa es útil para practicar el manejo de arrays y la iteración sobre ellos en C++.

## ¿Qué incluye el código?

1. **Declaración del Array**
   - El programa declara un array de 15 enteros llamado `array` para almacenar los valores ingresados por el usuario.
     ```cpp
     int array[15];
     ```

2. **Ingreso de Valores**
   - Se solicita al usuario que ingrese un valor para cada posición del array, desde la posición 1 hasta la 15. Este proceso se realiza mediante un ciclo `for`:
     ```cpp
     for(int i = 0; i < 15; i++) {
         cout << "Ingrese el valor para la posición " << i + 1 << ": ";
         cin >> array[i];
     }
     ```

3. **Conteo de Números Impares**
   - Luego, se utiliza otro ciclo `for` para recorrer el array y contar cuántos de los valores ingresados son impares. Un número es impar si su resto al dividirlo por 2 no es cero (`array[i] % 2 != 0`).
     ```cpp
     for(int i = 0; i < 15; i++) {
         if(array[i] % 2 != 0) {
             contador++;
         }
     }
     ```

4. **Salida del Resultado**
   - Al final, el programa imprime la cantidad de números impares encontrados en el array:
     ```cpp
     cout << "Cantidad de números impares: " << contador << endl;
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Compila el código usando un compilador de C++:
     ```bash
     g++ contadorDeImpares.cpp -o contadorDeImpares
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./contadorDeImpares
     ```

3. **Interacción con el Usuario**
   - El programa pedirá que ingreses 15 números, uno por uno. Después de ingresar todos los números, el programa mostrará cuántos de ellos son impares.

   Ejemplo de ejecución:
   ```plaintext
   Ingrese el valor para la posición 1: 5
   Ingrese el valor para la posición 2: 8
   Ingrese el valor para la posición 3: 7
   ...
   Cantidad de números impares: 7
