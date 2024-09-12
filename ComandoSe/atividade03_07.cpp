#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar um número inteiro
e exiba se ele é ímpar.
*/

int main() {
  int numero;

  cout << "Digite um valor: ";
  cin >> numero;

  if (numero % 2 != 0) {
    cout << "E impar";
  }

  return 0;
}