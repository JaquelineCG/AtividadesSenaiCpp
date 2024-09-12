#include <iostream>
#include <string>

using namespace std;

/*
Escreva um programa que solicite ao usuário um número inteiro e verifique
se ele é maior do que 10 OU menor do que 0. Se o número for maior do que
10 OU menor do que 0, o programa deve imprimir a mensagem 'Número
inválido!'.
*/
int main() {
  int numero;
  cout << "Digite um numero: ";
  cin >> numero;

  if ((numero > 10) || (numero < 0)) {
    cout << "Numero invalido";
  }

  return 0;
}