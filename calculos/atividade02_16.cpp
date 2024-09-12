#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário o raio e a altura de um cilindro
e calcule seu volume.
*/

int main() {
  const float pi = 3.14159265359;
  float raio, altura, volume;
  cout << "Digite o raio do cilindro: ";
  cin >> raio;
  cout << "Digite a altura do cilindro: ";
  cin >> altura;
  volume = pi * (raio * raio) * altura;
  cout << "O valor do volume e de: " << volume;

  return 0;
}