#include <iostream>
#include <string>

using namespace std;

/*
Crie um programa que peça ao usuário para digitar um número e verifique se
ele não é igual a zero. Se a condição for verdadeira, o programa deve
imprimir 'O número é diferente de zero'
*/
int main() {
  int valor;
  cout << "Digite um numero: ";
  cin >> valor;

  if (valor != 0) {
    cout << "O numero e diferente de zero";
  }

  return 0;
}