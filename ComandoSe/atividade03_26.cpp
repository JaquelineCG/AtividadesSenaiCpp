#include <iostream>
#include <string>

using namespace std;

/*
Escreva um programa que pergunte ao usuário se ele não é um membro
inativo de um clube. Se a resposta for negativa, o programa deve imprimir
'Por favor, atualize sua inscrição para continuar usufruindo dos benefícios
do clube'.
*/
int main() {
  string membro;
  cout << "Voce e um ativo? ";
  cin >> membro;

  if ((membro == "Nao") || (membro == "nao")) {
    cout << "Por favor, atualize sua inscrição para continuar usufruindo dos "
            "benefícios do clube";
  }

  return 0;
}