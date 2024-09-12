#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar dois números
inteiros e exiba se a diferença entre eles é menor ou igual a 10.
*/

int main() {
  int numero1, numero2;
  cout << "Digite um valor: ";
  cin >> numero1;
  cout << "Digite outro valor: ";
  cin >> numero2;

  int num1Menosnum2 = numero1 - numero2;
  int num2Menosnum1 = numero2 - numero1;
  if ((num1Menosnum2 == 10) || (num2Menosnum1 == 10)) {
    cout << "A diferenca entra eles e igual a 10";
  } else if ((abs(num1Menosnum2) < 10 || abs(num2Menosnum1) < 10)) {
    cout << "A diferenca entra eles e menor a 10";
  }

  return 0;
}