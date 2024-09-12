#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar um ano. Verifique
se um ano é bissexto.
*/

int main() {
  int ano;

  cout << "Digite um ano: ";
  cin >> ano;

  if (ano % 4 == 0) {
    if ((ano % 100 != 0) || (ano % 400 == 0)) {
      cout << ano << " e um ano bissexto";
    }
  }

  return 0;
}