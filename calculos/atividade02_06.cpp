#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar dois números e
exiba o resultado da subtração do segundo pelo primeiro.
*/

int main() {
  int numero1, numero2, resultado;

  cout << "Digite um valor: ";
  cin >> numero1;
  cout << "Digite outro valor: ";
  cin >> numero2;
  resultado = numero2 - numero1;
  cout << numero2 << " - " << numero1 << " = " << resultado;

  return 0;
}