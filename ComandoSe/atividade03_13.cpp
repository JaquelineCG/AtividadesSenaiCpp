#include <iostream>
#include <string>
using namespace std;
/*
m) Faça um programa que apresente um menu com as opções de meses do ano
(janeiro a dezembro) e solicite ao usuário que escolha um mês. Em seguida,
exiba uma mensagem informando a quantidade de dias do mês escolhido.
*/

int main() {
  int mes;
  cout << "1 - Janeiro \n2 - Feveireiro \n3 - Marco \n4 - Abril \n5 - Maio \n6 "
          "- Junho \n7 - Julho \n8 - Agosto \n9 - Setembro \n10 - Outubro \n11 "
          "- Novembro \n12 - Dezembro";
  cout << "\nEscolha um mes: " << endl;
  cin >> mes;
  if (mes == 2) {
    cout << "O mes escolhido tem 28 dias (ou 29 dias, nos anos bissextos)";
  } else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) {
    cout << "O mes escolhido tem 30 dias";
  } else if ((mes >= 1) && (mes <= 12)) { // os meses restantes
    cout << "O mes escolhido tem 31 dias";
  } else {
    cout << "Mes invalido!";
  }

  return 0;
}