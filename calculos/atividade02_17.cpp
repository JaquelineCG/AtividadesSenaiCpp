#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário três notas e seus respectivos
pesos, e calcule a média ponderada.
*/

int main() {
  float nota1, nota2, nota3, p1, p2, p3, mediaPonderada;
  cout << "Digite a primeira nota: ";
  cin >> nota1;
  cout << "Digite o peso da primeira nota: ";
  cin >> p1;
  cout << "Digite a segunda nota: ";
  cin >> nota2;
  cout << "Digite o peso da segunda nota: ";
  cin >> p2;
  cout << "Digite a terceira nota: ";
  cin >> nota3;
  cout << "Digite o peso da terceira nota: ";
  cin >> p3;

  mediaPonderada =
      ((nota1 * p1) + (nota2 * p2) + (nota3 * p3)) / (p1 + p2 + p3);
  cout << "A media ponderada e de: " << mediaPonderada;

  return 0;
}