#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que pergunte ao usuário se ele deseja comprar um
carro novo e se tem dinheiro suficiente para isso. Se o usuário quiser
comprar um carro novo e tiver dinheiro suficiente, o programa deve imprimir
"Parabéns, você pode comprar um carro novo!";.
*/

int main() {
  bool carroNovo, dinheiroSuficiente;
  cout << "Voce deseja comprar um carro novo? \n1 para sim, 0 para nao: ";
  cin >> carroNovo;
  cout << "Voce tem dinheiro suficiente?  \n1 para sim, 0 para nao: ";
  cin >> dinheiroSuficiente;

  if (carroNovo && dinheiroSuficiente) {
    cout << "Parabens, voce pode comprar um carro novo!";
  }
  return 0;
}