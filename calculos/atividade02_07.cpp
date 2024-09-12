#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar um número e exiba
o seu valor absoluto. OBS.: Utilize a função abs(expressao)
*/

int main() {
  int numero;
  cout << "Digite um valor: ";
  cin >> numero;
  cout << "O valor absoluto de " << numero << " e: " << abs(numero);

  return 0;
}