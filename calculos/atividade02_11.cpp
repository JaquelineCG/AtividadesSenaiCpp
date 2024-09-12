#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para inserir três números e
calcule a média aritmética deles.
*/

int main() {
  float numero1, numero2, numero3, media;
  cout << "Digite um valor: ";
  cin >> numero1;
  cout << "Digite outro valor: ";
  cin >> numero2;
  cout << "Digite o ultimo valor: ";
  cin >> numero3;
  media = (numero1 + numero2 + numero3) / 3;
  cout << "A media de " << numero1 << "+" << numero2 << "+" << numero3
       << " e de: " << media;

  return 0;
}