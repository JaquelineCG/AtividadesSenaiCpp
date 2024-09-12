#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar dois números
inteiros e exiba se eles são iguais.
*/

int main() {
  int numero1, numero2;
  cout << "Digite um valor: ";
  cin >> numero1;
  cout << "Digite outro valor: ";
  cin >> numero2;

  if (numero1 == numero2) {
    cout << "Sao iguais";
  } else {
    cout << "Nao sao iguais";
  }

  return 0;
}