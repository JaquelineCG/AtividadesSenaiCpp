#include <iostream>
#include <math.h>
#include <string>
using namespace std;
/*
Escreva um programa que peça ao usuário para digitar um número e exiba a
sua raiz quadrada. OBS.: Utilize a função raizq(número)
*/

int main() {
  int numero, raiz;

  cout << "Digite um valor: ";
  cin >> numero;
  cout << "A raiz de " << numero << " e: " << sqrt(numero);

  return 0;
}