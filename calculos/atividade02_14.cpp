#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar o preço de um
produto e o seu desconto em porcentagem, e armazene-os em variáveis. Em
seguida, calcule o preço final com o desconto e exiba-o na tela.
*/

int main() {
  float valor, desconto, valorFinal;
  cout << "Digite o valor do produto: ";
  cin >> valor;
  cout << "Digite o valor do desconto: ";
  cin >> desconto;
  valorFinal = valor - (valor * (desconto / 100));
  cout << "O valor com desconto e de: " << valorFinal;

  return 0;
}