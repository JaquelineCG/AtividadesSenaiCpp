#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que peça ao usuário para digitar dois números e exiba
o resultado da divisão do primeiro pelo segundo.
*/

int main(){
    float primeironum, segundonum, resultado;

    cout << "Digite o primeiro valor: ";
    cin >> primeironum;
    cout << "Digite o segundo valor: ";
    cin >> segundonum;
    resultado = primeironum/segundonum;
    cout << "A divisao de " << primeironum << " por " << segundonum << " e de: " << resultado;
    return 0;
}