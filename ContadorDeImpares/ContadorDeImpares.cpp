#include <iostream>
using namespace std;
int main() {
int array[15];
int contador = 0;
// Ingresar los valores del array
for(int i = 0; i < 15; i++) {
cout << "Ingrese el valor para la posici�n " << i + 1 << ": ";
cin >> array[i];
}
// Contar n�meros impares
for(int i = 0; i < 15; i++) {
if(array[i] % 2 != 0) {
contador++;
}
}
cout << "Cantidad de n�meros impares: " << contador << endl;
return 0;
}
