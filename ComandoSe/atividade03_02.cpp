#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar dois números
inteiros e exiba se o primeiro número é menor que o segundo número.
*/

int main() {
  int numero1, numero2;
  cout << "Digite um valor: ";
  cin >> numero1;
  cout << "Digite outro valor: ";
  cin >> numero2;

  if (numero1 < numero2) {
    cout << numero1 << " e menor que " << numero2;
  } else {
    cout << numero2 << " e menor que " << numero1;
  }

  return 0;
}