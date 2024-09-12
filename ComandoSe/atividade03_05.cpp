#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar três números
inteiros e exiba se o primeiro número é menor que o segundo número e
maior que o terceiro número.
*/

int main() {
  float numero1, numero2;
  cout << "Digite o primeiro valor real: ";
  cin >> numero1;
  cout << "Digite o segundo valor real: ";
  cin >> numero2;

  if (numero1 > numero2) {
    cout << numero1 << " maior que " << numero2;
  } else if (numero2 < numero2) {
    cout << numero2 << " maior que " << numero1;
  } else {
    cout << "Sao iguais";
  }

  return 0;
}