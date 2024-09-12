#include <iostream>
#include <string>
using namespace std;
/*
a) Escreva um programa que peça ao usuário para digitar dois números e exiba a soma deles.
*/

int main(){
    int numero1, numero2, soma;
    cout << "Digite um valor: ";
    cin >> numero1;
    cout << "Digite outro valor: ";
    cin >> numero2;

    soma = numero1 + numero2;
    cout << "A soma e: " << soma;
    return 0;
}