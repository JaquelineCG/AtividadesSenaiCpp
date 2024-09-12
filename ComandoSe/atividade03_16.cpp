#include <iostream>
using namespace std;

/*
Escreva um programa que pergunte ao usuário se ele possui um diploma de
ensino superior e se tem mais de 21 anos. Se o usuário possuir um diploma
de ensino superior e tiver mais de 21 anos, o programa deve imprimir
'Parabéns, você está qualificado para a vaga!'
*/
int main() {
  bool diploma, idade;
  cout << "Digite 1 se voce tem um diploma superior\nigite 0 se voce nao tem "
          "um diploma superior: ";
  cin >> diploma;
  cout << "Digite 1 se voce tem mais de 21 anos\nigite 0 se voce tem 21 anos "
          "ou menos: ";
  cin >> idade;

  if (diploma && idade) {
    cout << "Parabens, você esta qualificado para a vaga";
  }

  return 0;
}