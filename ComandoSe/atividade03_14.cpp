#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que pergunte ao usuário sua idade e se tem carteira de
motorista. Se o usuário tiver mais de 18 anos e possuir carteira de motorista,
o programa deve imprimir "Você pode dirigir";.
*/

int main() {
  int idade;
  bool carteira;
  cout << "Digite sua idade: ";
  cin >> idade;
  cout << "Digite 1 se possui carteira de motorista e 0 se nao possui: ";
  cin >> carteira;

  if ((idade > 18) && (carteira)) {
    cout << "Voce pode dirigir";
  }

  return 0;
}