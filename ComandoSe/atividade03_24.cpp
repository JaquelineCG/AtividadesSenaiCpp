#include <iostream>
#include <string>

using namespace std;

/*
Escreva um programa que pergunte ao usuário se ele não é um robô. Se a
resposta for negativa, o programa deve imprimir 'Por favor, prove que você
não é um robô'.
*/
int main() {
  string verifica;
  cout << "Voce é um robo?  ";
  cin >> verifica;

  if ((verifica == "nao") || (verifica == "Nao") || (verifica == "NAO")) {
    cout << "Por favor, prove que você não é um robô";
  }

  return 0;
}