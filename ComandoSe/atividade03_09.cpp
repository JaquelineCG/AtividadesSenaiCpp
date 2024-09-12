#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar dois números reais
e exiba se o primeiro número é menor ou igual ao segundo número.
*/

int main() {
  float numero1, numero2;
  cout << "Digite o primeiro numero real: ";
  cin >> numero1;
  cout << "Digite o segundo numero real: ";
  cin >> numero2;

  if (numero1 < numero2) {
    cout << numero1 << " e menor que " << numero2;
  } else if (numero1 == numero2) {
    cout << "Sao iguais";
  }

  return 0;
}