#include <iostream>
#include <string>
using namespace std;
/*
Escreva um programa que solicite ao usuário para digitar três números
inteiros e exiba se o primeiro número é menor que o segundo número e
maior que o terceiro número.
*/

int main(){
    int numero1, numero2, numero3;
    cout << "Digite o primeiro valor: ";
    cin >> numero1;
    cout << "Digite o segundo valor: ";
    cin >> numero2;
    cout << "Digite o terceiro valor: ";
    cin >> numero3;

    if((numero1 < numero2) && (numero1 > numero3)){
        cout << numero1 << " e menor que " << numero2 << " e maior que " << numero3;     
    }else if((numero1 < numero3) && (numero1 > numero2)){
        cout << numero1 << " e menor que " << numero3 << " e maior que " << numero2;     
    }else if( (numero2 < numero1) && (numero2 > numero3)){
        cout << numero2 << " e menor que " << numero1 << " e maior que " << numero3;     
    }else if((numero2 < numero3)&&(numero2 > numero1)){
        cout << numero2 << " e menor que " << numero3 << " e maior que " << numero1;     
    }else if((numero3 < numero1) && (numero3 > numero2)){
        cout << numero3 << " e menor que " << numero1 << " e maior que " << numero2;     
    }else{
        cout << numero3 << " e menor que " << numero2 << " e maior que " << numero1;     
    }

    return 0;
}