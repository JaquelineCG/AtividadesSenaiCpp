#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar um número inteiro
e exiba se ele é negativo.
*/

int main() {
  int numero;
  cout << "Digite um valor: ";
  cin >> numero;
  if (numero < 0) {
    cout << numero << " e negativo";
  }

  return 0;
}