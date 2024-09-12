#include <iostream>
#include <string>

using namespace std;

/*
Escreva um programa que pergunte ao usuário se ele não deseja cancelar
uma operação. Se a resposta for negativa, o programa deve imprimir 'Por
favor, confirme o cancelamento da operação';.
*/
int main() {
  string cancelar;
  cout << "Nao deseja cancelar? ";
  cin >> cancelar;
  if ((cancelar == "nao") || (cancelar == "NAO")) {
    cout << "Por favor, confirme o cancelamento da operação";
  }

  return 0;
}