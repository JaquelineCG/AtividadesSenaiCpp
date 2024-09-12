#include <iostream>
using namespace std;

/*
Escreva um programa que pergunte ao usuário se ele é assinante de um
serviço de streaming e se já assistiu a uma série específica. Se o usuário for
assinante e já tiver assistido à série, o programa deve imprimir 'Ótimo, agora
você pode assistir à nova temporada!';.
*/
int main() {
  bool assinante, serie;
  cout << "Digite 1 se voce e assinante\nigite 0 se voce nao e um assinante: ";
  cin >> assinante;
  cout << "Digite 1 se voce ja assistiu You\nDigite 0 se voce nao assistiu "
          "You: ";
  cin >> serie;

  if (assinante && serie) {
    cout << "Otimo, agora voce pode assistir a nova temporada";
  }

  return 0;
}