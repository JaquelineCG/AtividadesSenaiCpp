#include <iostream>
#include <string>
using namespace std;
/*
c) Escreva um programa que peça ao usuário para digitar um número e exiba a sua metade.
*/

int main(){
    float numero1;
    cout << "Digite um valor: ";
    cin >> numero1;

    cout << "A metade de : " << numero1 << " e : " << (numero1/2) ;
    return 0;
}