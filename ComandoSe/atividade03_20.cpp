#include <iostream>
#include <string>

using namespace std;

/*
Crie um programa que solicite ao usuário um número inteiro e verifique se
ele é divisível por 3 OU por 5. Se o número for divisível por 3 OU por 5, o
programa deve imprimir a mensagem &quot;O número é divisível por 3 ou por
5!&quot;..
*/
int main() {
  int valor;
  cout << "Digite um numero: ";
  cin >> valor;

  if ((valor % 3 == 0) || (valor % 5 == 0)) {
    cout << "Numero e divisivel por 3 ou por 5";
  }

  return 0;
}