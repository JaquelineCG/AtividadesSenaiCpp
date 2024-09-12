#include <iostream>
#include <string>

using namespace std;

/*
Escreva um programa que pergunte ao usuário se ele deseja adicionar açúcar
ou leite ao seu café. Se o usuário responder que deseja adicionar açúcar OU
leite, o programa deve imprimir a mensagem 'Café com adicional preparado!';..
*/
int main() {
  int adicional;
  cout << "Escolha o Adicional ----- \n1- se voce deseja adiconar AÇUCAR ao "
          "cafe: \n2- se voce deseja adicionar LEITE ao cafe: ";
  cin >> adicional;

  if ((adicional == 1) || (adicional == 2)) {
    cout << "Café com adicional preparado!";
  } else {
    cout << "Opcao invalida";
  }

  return 0;
}