#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário o raio de um círculo e calcule
sua área
*/

int main() {
  const float pi = 3.14159265359;
  float raio, area;
  cout << "Digite o raio do circulo: ";
  cin >> raio;
  area = pi * (raio * raio);
  cout << "O valor da area e de: " << area;

  return 0;
}