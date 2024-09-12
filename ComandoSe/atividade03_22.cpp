#include <iostream>
#include <string>

using namespace std;

/*
Crie um programa que solicite ao usuário o seu nome e verifique se ele é
igual a 'Wilson' OU 'Gloria'. Se o nome for igual a 'Wilson' OU 'Gloria',
o programa deve imprimir a mensagem 'Olá, bem-vindo(a) de volta!'..
*/
int main() {
  string nome;
  cout << "Qual e o seu nome? : ";
  cin >> nome;

  if ((nome == "Wilson") || (nome == "Gloria")) {
    cout << "Ola, bem-vindo(a) de volta!";
  }

  return 0;
}