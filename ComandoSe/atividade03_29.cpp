#include <iostream>
#include <string>

using namespace std;

/*
Escreva um programa que pergunte ao usuário os lados de um triângulo.
Determinar se um triângulo
 Um triângulo é equilátero se todos os seus lados forem iguais.
 Um triângulo é isósceles se tiver dois lados iguais.
 Um triângulo é escaleno se todos os seus lados forem diferentes. é equilátero,
isósceles ou escaleno.
*/
int main() {
  int lado1, lado2, lado3;
  cout << "Digite um lado do triangulo: ";
  cin >> lado1;

  cout << "Digite outro lado do triangulo: ";
  cin >> lado2;

  cout << "Digite o ultimo lado do triangulo: ";
  cin >> lado3;

  if ((lado1 == lado2) && (lado2 == lado3)) {
    cout << "Equilatero";
  } else if ((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)) {
    cout << "Isosceles";
  } else {
    cout << "Escaleno";
  }

  return 0;
}