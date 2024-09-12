#include <iostream>
#include <string>

using namespace std;

/*
Crie um programa que peça ao usuário para digitar uma palavra e verifique
se ela não é vazia. Se a condição for verdadeira, o programa deve imprimir
'A palavra não é vazia'.
*/
int main() {
  string palavra;
  cout << "Digite uma palavra:  ";
  cin >> palavra;

  if (!palavra.empty()) {
    cout << "A palavra nao e vazia";
  }

  return 0;
}