#include <iostream>
#include <string>

using namespace std;

/*
Escreva um programa que solicite ao usuário o seu nome e idade. O
programa deve verificar se o nome possui mais de 3 caracteres e se a idade é
maior ou igual a 18 anos. Se ambas as condições forem verdadeiras, o
programa deve imprimir 'Acesso permitido';. Caso contrário, deve imprimir
"Acesso negad';.
*/
int main() {
  string nome;
  int idade;
  cout << "Digite seu nome: ";
  cin >> nome;
  cout << "Digite sua idade: ";
  cin >> idade;
  int tamanhoNome = nome.size();

  if ((tamanhoNome >= 3) && (idade >= 18)) {
    cout << "Acesso permitido";
  } else {
    cout << "Acesso negado";
  }

  return 0;
}