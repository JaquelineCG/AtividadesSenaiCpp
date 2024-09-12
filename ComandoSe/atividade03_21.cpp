#include <iostream>
#include <string>

using namespace std;

/*
Escreva um programa que pergunte ao usuário se ele deseja comprar um
produto. Se o usuário responder 'sim' OU 's', o programa deve imprimir a
mensagem 'Obrigado pela compra!'..
*/
int main() {
  string compra;
  cout << "Voce deseja comprar um produto? : ";
  cin >> compra;

  if ((compra == "sim") || (compra == "s")) {
    cout << "Obrigado pela compra";
  }

  return 0;
}