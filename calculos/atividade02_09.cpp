#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar um número e exiba
o seu resto da divisão por 2.
*/

int main() {
  int numero, resultado;
  cout << "Digite um valor: ";
  cin >> numero;
  resultado = numero % 2;
  cout << "O resto da divisao de " << numero << " por 2 e: " << resultado;

  return 0;
}