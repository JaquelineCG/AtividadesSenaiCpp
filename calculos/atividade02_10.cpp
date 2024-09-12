#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar um número e exiba
o resultado da divisão inteira.
*/

int main() {
  int numero1, numero2, resultado;
  cout << "Digite um valor: ";
  cin >> numero1;
  cout << "Digite outro valor: ";
  cin >> numero2;
  resultado = numero1 / numero2;
  cout << numero1 << " / " << numero2 << " = " << resultado;

  return 0;
}