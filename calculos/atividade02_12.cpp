#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário seu peso (em kg) e altura (em
metros) e calcule o Índice de Massa Corporal (IMC).
*/

int main() {
  float peso, altura, imc;
  cout << "Digite o seu peso: ";
  cin >> peso;
  cout << "Digite sua altura: ";
  cin >> altura;
  imc = peso / (altura * altura);
  cout << "O seu IMC e de: " << imc << endl;

  return 0;
}